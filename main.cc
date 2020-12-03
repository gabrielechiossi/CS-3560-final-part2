#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include "function.h"
using namespace std;

int main(int argc, char **argv){
    if(argv[1]){
        if(argv[2]){
            cout << "Number of Lines: " << countLine(argv[1]) << endl;
            cout << "Number of characters: " << countChar(argv[2]) << endl;
        }else{
            cout << "Number of Lines: " << countLine(argv[1]) << endl;
            cout << "Number of characters: " << countChar("Athens") << endl;
        }
    }else{
        cout << "Number of Lines: " << countLine("Ohio University") << endl;
        cout << "Number of characters: " << countChar("Athens") << endl;
    }
    return 0;
}
