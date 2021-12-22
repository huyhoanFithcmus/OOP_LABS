#include <sstream>
#include <string>
#include <iostream>
#include <math.h>
#include <ctime>
#include <iomanip>  
#include <fstream>

using namespace std;

class Integer {
public:
    static int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return(b, a % b);
    }
};

class RandomIntegerGenerator {
public:
    RandomIntegerGenerator() {
        srand(time(NULL));
    }

    int next() {
        return rand();
    }

    //Ceiling
    int next(int c)
    {
        return rand() % c;
    }

    //left right
    int next(int a, int b) {
        // cout << rand() % (b - a + 1) + a << endl;
        return (rand() % (b - a + 1) + a);
    }
};

class Fraction {
private:
    long long _num;
    long long _den;
public:
    long long getNum()
    {
        return this->_num;
    }

    long long getDenom()
    {
        return this->_den;
    }

    void setNum(int val)
    {
        this->_num = val;
    }

    void setDenom(int val)
    {
        this->_den = val;
    }

    void LowestTerm()
    {
        Integer i;
        if (i.gcd(_num, _den) != 0)
        {
            this->_num = _num / i.gcd(_num, _den);
            this->_den = _den / i.gcd(_num, _den);
        }

    }

    void Print()
    {
        if (this->_num % this->_den == 0)
        {
            cout << this->_num << " ";
        }
        else if (this->_den % this->_num == 0)
        {
            cout << 1<< "/" << this->_den << " ";
        }
        else
            cout <<  this->_num << "/" << this->_den << " ";
    }

    void PrintFracWithDecimal2()
    {
        double devision;
        devision = (double)this->_num / this->_den;
        cout << setprecision(1) << devision << " ";
    }

    void PrintFracInPercentage()
    {
        double devision;
        devision = (double)this->_num / this->_den;
        cout << setprecision(3) << devision * 100 <<"%" << " ";
    }
};


class FractionToLowestTermUIConverter {
public:
    string convert(Fraction f)
    {
        f.LowestTerm();
        string result;
        result = to_string(f.getNum()) + "/" + to_string(f.getDenom());

        return result;
    }


    Fraction convertBack(string Frac) // No need to implement yet
    {
        string num, denom;
        stringstream ss(Frac);
        getline(ss, num, '/');
        getline(ss, denom);

        Fraction f;
        f.setNum(stoi(num));
        f.setDenom(stoi(denom));

        f.LowestTerm();

        return f;
    }
};

class FractionToPercentageUIConverter {
public:
    string convert(Fraction f)
    {
        double devision;
        devision = (double)f.getNum() / f.getDenom();
        string result = to_string(devision * 100) + "%";

        return result;
    }

    Fraction convertBack(string Frac) // No need to implement yet
    {
        string num, denom;
        stringstream ss(Frac);
        getline(ss, num, '/');
        getline(ss, denom);

        Fraction f;
        f.setNum(stoi(num));
        f.setDenom(stoi(denom));

        f.LowestTerm();

        return f;
    }
};

class FractionToDecimalUIConverter {
public:
    string convert(Fraction f)
    {
        double devision;
        devision = (double)f.getNum() / f.getDenom();
        string result = to_string(devision);

        return result;
    }
    Fraction convertBack(string Frac) // No need to implement yet
    {
        return Fraction();
    }
};