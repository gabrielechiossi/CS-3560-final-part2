/** @file function.h
	@brief library containing countLines and countChar
	@author Gabriele Chiossi
	@date December 3rd 2020
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#ifndef FUNCTION_H
#define FUNCTION_H

using namespace std;

/**
 *****************************************************************************************
 *  @brief      counts the total number of line in a string
 *
 *  @param      pName - string passed to the function
 *
 *  @return     count, number of lines total
 ****************************************************************************************/
int countLine(string pName){
    int count = 1; 
    for(int i = 0; i < pName.length(); i++){
        if(pName[i] == '\n'){
            count++;
        }
    }

    return count;
}

/**
 *****************************************************************************************
 *  @brief      counts the total number of char in a string
 *
 *  @param      pName - string passed to the function
 *
 *  @return     count, number of char total
 ****************************************************************************************/
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