#define CATCH_CONFIG_MAIN
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "catch_amalgamated.hpp"
#include "function.h"

using namespace std;

TEST_CASE( "Pass -Athens- should return 6 since it has 6 characters") {
    REQUIRE(countChar("Athens") == 6);
}

TEST_CASE( "Pass -USA is a country- should return 13 since it has 13 characters") {
    REQUIRE(countChar("USA is a country") == 13);
}

TEST_CASE( "Pass -Ohio 2020- should return 8 since it has 48 characters") {
    REQUIRE(countChar("Ohio 2020") == 8);
}