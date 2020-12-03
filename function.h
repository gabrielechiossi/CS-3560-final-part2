
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#ifndef FUNCTION_H
#define FUNCTION_H

using namespace std;

int countLine(string pName){
    int count = 1; 
    for(int i = 0; i < pName.length(); i++){
        if(pName[i] == '\n'){
            count++;
        }
    }

    return count;
}

int countChar(string pName){
    int count = 0;
    for(int i = 0; i < pName.length(); i++){
        if(pName[i] != '/n' || pName[i] != '/t' || pName[i] != ' '){
            count++;
        }
    }
    return count;
}

#endif