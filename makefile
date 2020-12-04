CXXFLAGS= -Wall -std=c++14 -I./lib

all:
	@echo "Available Targets"
	@echo " - build: build the source code"
	@echo " - make-check: run cppcheck and valgrind"
	@echo " - make-doc: create the documentation"
	@echo " - build-test: build the testing source code"
	@echo " - clean: remove all files created earlier"

build: main

main: main.o
	g++ -o count main.o

make-doc:
	doxygen -g Doxyfile
	doxygen Doxyfile

make-check: main.cc
	cppcheck --enable=all  --check-config main.cc
	valgrind --leak-check=full --show-leak-kinds=all ./count

build-test: main-test
	
main-test: test_main.o catch_amalgamated.o
	g++ -o main-test test_main.o catch_amalgamated.o

clean:
	-rm -f *.o
	-rm -f count
	-rm -f main-test
	-rm -f *.exe
	-rm -f *.out
	-rm -f Doxyfile
	-rm -rf latex
	-rm -rf html