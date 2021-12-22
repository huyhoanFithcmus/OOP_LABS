#include <iostream>
#include <sstream>

using namespace std;

class Integer {
public:
    static int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
};


class Fraction
{
private:
	long long _num;
	long long _den;
public:
    int getNum() 
    { 
        return _num; 
    }

    void setNum(int num) 
    { 
        this->_num = num; 
    }

    int getDenom() 
    {
        return _den; 
    }
    void setDenom(int denom) 
    { 
        this->_den = denom; 
    }

    void Print() {
        stringstream out;
        out << "(" << this->_num << "/ " << this->_den << ")";

        string result = out.str();
        cout << result;
    }

    void add(Fraction f) {
        this->_num = this->_num * f.getDenom() + this->_den * f.getNum();
        this->_den = this->_den* f.getDenom();
    }

    void ReduceFraction() {
        this->_num = this->_num / Integer::gcd(this->_num, this->_den);
        this->_den= this->_den / Integer::gcd(this->_num, this->_den);
    }
};




class RandomIntegerGenerator {
public:
	RandomIntegerGenerator() {
		srand(time(NULL));
	}

	static long long nextInt(long long left, long long right) // [left, right]
	{
		return rand() % (right - left + 1) + left;
	}
};



