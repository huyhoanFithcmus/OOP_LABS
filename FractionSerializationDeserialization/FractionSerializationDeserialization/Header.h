#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

class Integer
{
public:
	long long gcd(long long a, long long b)
	{
		if (b == 0)
			return a;
		return(b, a % b);
	}

	static bool isValid(string s) // check the string can convert to a number
	{
		string::const_iterator it = s.begin();
		while (it != s.end() && std::isdigit(*it)) ++it;
		return !s.empty() && it == s.end();
	}

	static int parse(string s)
	{
		string num, denom;
		stringstream ss(s);

		getline(ss, num, '/');
		getline(ss, denom);

		if (Integer::isValid(num) && Integer::isValid(denom))
			return 1;
		return 0;
	}

	static bool tryParse(string s, int parse(string s))
	{
		if (parse(s) == 0)
			return false;
		return true;
	}
};

class Fraction {
private:
	int _num;
	int _den;
public:
	long long Numerator() 
	{
		return _num; 
	}
	
	long long Denominator() 
	{ 
		return _den; 
	}

	void setNum(int num)
	{
		this->_num = num;
	}

	void setDenom(int denom)
	{
		this->_den = denom;
	}

public:
	void LowestTerm()
	{
		Integer i;
		if (i.gcd(_num, _den) != 0)
		{
			this->_num = _num / i.gcd(_num, _den);
			this->_den = _den / i.gcd(_num, _den);
		}
	}

	vector<Fraction> readFrac(string fileName)
	{
		fstream fi(fileName);
		Fraction C;
		vector<Fraction> Frac;

		string s, num, denom;
		while (!fi.eof())
		{
			getline(fi, s);
			stringstream ss(s);
			getline(ss, num, '/');
			getline(ss, denom);

			C._num = stoi(num);
			C._den = stoi(denom);

			C.LowestTerm();
			
			Frac.push_back(C);
		}

		return Frac;
	}

	void Print()
	{
		if (this->_num % this->_den == 0)
		{
			cout << this->_num / this->_den << " ";
		}
		else if (this->_den % this->_num == 0)
		{
			cout << 1 << "/" << this->_den / this->_num << " ";
		}
		else
			cout << this->_num << "/" << this->_den << " ";
	}

	void add(Fraction f)
	{
		this->_num = this->_num * f._den + this->_den * f._num;
		this->_den = this->_den * f._den;
	}
};

class FractionToStringDataConverter {
public:
	string convert(Fraction f)
	{
		string result;
		result = to_string(f.Numerator()) + "/" + to_string(f.Denominator());

		return result;
	}

	// Can throw an exception when parse
	Fraction convertBack(string value)
	{
		Fraction C;
		string num, denom;
		stringstream ss(value);    
		getline(ss, num, '/');
		getline(ss, denom);
		if (Integer::isValid(num) && Integer::isValid(denom))
		{
			C.setNum(stoi(num));
			C.setDenom(stoi(denom));
		}
		return C;
	}
	// Will return true if parsing successfully
	// Return false if cannot parse
	// The output Fraction will be stored through reference 
	// Check if you can parse a string into a fraction
	static bool isValidFormat(string value)
	{
		for (int i = 0; i < value.size(); i++)
		{
			if (value[i] == '/')
			{
				string num, denom;
				stringstream ss(value);
				getline(ss, num, '/');
				getline(ss, denom);
				if (Integer::isValid(num) && Integer::isValid(denom))
				{
					return true;
				}
				else
					return false;

				break;
			}
		}
		return false;
	}
};

class Overwrite 
{
public:
	vector<Fraction> readFrac(string fileName)
	{
		fstream fi(fileName);
		Fraction C;
		vector<Fraction> Frac;

		string s, num, denom;
		while (!fi.eof())
		{
			getline(fi, s);
			if (FractionToStringDataConverter::isValidFormat(s) == true)
			{
				stringstream ss(s);
				getline(ss, num, '/');
				getline(ss, denom);

				C.setNum(stoi(num));
				C.setDenom(stoi(denom));

				C.LowestTerm();

				Frac.push_back(C);
			}
		}

		return Frac;
	}

	void writeFile(vector<Fraction> frac)
	{
		ofstream fo;
		fo.open("Temp.txt", ios::out);
		int i = 0;

		while (!fo.eof() && i < frac.size())
		{
			fo << frac[i].Numerator() << "/" << frac[i].Denominator() << endl;
			i++;
		}
	}
};