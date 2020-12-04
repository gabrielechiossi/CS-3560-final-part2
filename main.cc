/** @file main.cc
	@brief main file
	@author Gabriele Chiossi
	@date December 3rd 2020
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include "function.h"
using namespace std;

/**
 *****************************************************************************************
 *  @brief      main function
 *
 *  @param      int argc, and char **argv
 *
 *  @return     integer 0
 ****************************************************************************************/
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
