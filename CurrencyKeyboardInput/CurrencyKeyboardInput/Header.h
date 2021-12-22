#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <ctime>
#include <time.h>
#include <fstream>
#include <vector>
#include <tuple>
#include <stdexcept>
#include <locale>

using namespace std;

class RandomIntegerGenerator
{
public:
	RandomIntegerGenerator();
	static long long next(long long left, long long right);
};

class string_star
{
public:
    static string reverseStr(string& str);
    char do_thousands_sep() const
    { 
        return '.'; 
    }
    string do_grouping() const 
    { 
        return "\3"; 
    }
};

class IntegerToThousandSeparatedUIConverter {
private:
    string _thousandSeparator = ".";
public:
    bool isValidFormat(string s);
    static string convert(int value);
    tuple<bool, int, string, int> convertBack(string s);
};

class IntegerToCurrencyUIConverter {
public:
    bool isValidFormat(string s);
    static string convert(int value);
    tuple<bool, int, string, int> convertBack(string s);
    static long long covert_int(string s);
};