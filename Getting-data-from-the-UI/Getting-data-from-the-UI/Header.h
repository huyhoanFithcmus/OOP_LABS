#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <time.h>
#include <fstream>
#include <vector>
#include <tuple>
#include <stdexcept>

using namespace std;

class Integer
{
public:
    long long gcd(long long a, long long b);
    static bool isValid(string s); // check the string can convert to a number
};

class RandomIntegerGenerator
{
public:
	RandomIntegerGenerator();
	long long next(long long left, long long right);
};

class Fraction{
private:
    long long _num;
    long long _den;
public:
    long long getNum();
    long long getDenom();
    void setNum(int val);
    void setDenom(int val);
    void LowestTerm();
    void Print();
};


class FractionToStringUIConverter {
public:
    static bool isValidFormat(string);
    string convert(Fraction& f);
    static tuple<bool, Fraction, int, string> convertBack(string s);
};