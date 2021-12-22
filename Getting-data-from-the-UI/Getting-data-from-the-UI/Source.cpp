#include "Header.h"

long long Integer::gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	return(b, a % b);
}

bool Integer::isValid(string s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

RandomIntegerGenerator::RandomIntegerGenerator()
{
	srand(time(NULL));
}

long long RandomIntegerGenerator::next(long long left, long long right)
{
	return (rand() % (right - left + 1)) + left;
}

long long Fraction::getNum()
{
	return this->_num;
}

long long Fraction::getDenom()
{
	return this->_den != 0;
}

void Fraction::setNum(int val)
{
	this->_num = val;
}

void Fraction::setDenom(int val)
{
	this->_den = val;
}

void Fraction::LowestTerm()
{
	Integer i;
	if (i.gcd(_num, _den) != 0)
	{
		this->_num = _num / i.gcd(_num, _den);
		this->_den = _den / i.gcd(_num, _den);
	}
}

void Fraction::Print()
{
	if (this->_num % this->_den == 0)
	{
		cout << this->_num << " ";
	}
	else if (this->_den % this->_num == 0)
	{
		cout << 1 << "/" << this->_den << " ";
	}
	else
		cout << this->_num << "/" << this->_den << " ";
}

bool FractionToStringUIConverter::isValidFormat(string value)
{
	int count = 0;
	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] == '/')
			count++;
	}

	if (count == 0)
	{
		if (Integer::isValid(value))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (count == 1)
		{
			stringstream ss(value);
			string num, denom;
			getline(ss, num, '/');
			getline(ss, denom);
			if (Integer::isValid(num) && Integer::isValid(denom))
			{
				if(stoi(denom) != 0)
					return true;
			}
			else
				return false;
		}
		else if (count >= 1)
		{
			return false;
		}
		else
		{
			return false;
		}
	}
}

string FractionToStringUIConverter::convert(Fraction& f)
{
	string result;
	result = to_string(f.getNum()) + "/" + to_string(f.getDenom());
	return result;
}

tuple<bool, Fraction, int, string> FractionToStringUIConverter::convertBack(string s)
{
	tuple<bool, Fraction, int, string> result;

	Fraction f_result;
	bool check = true;
	int error_code = 0; 
	string string_0 = "succeeded";
	string string_1 = "failed";

	result = make_tuple(check, f_result, error_code, string_0);

	if (FractionToStringUIConverter::isValidFormat(s))
	{
		string num, denom;
		stringstream ss(s);
		getline(ss, num, '/');
		getline(ss, denom);

		f_result.setNum(stoi(num));
		f_result.setDenom(stoi(denom));

		get<1>(result) = f_result;

		return result;
	}
	else
	{
		f_result.setNum(0);
		f_result.setDenom(1);
		get<0>(result) = false;
		get<1>(result) = f_result;
		get<2>(result) = 1;
		get<3>(result) = string_1;

		return result;
	}
}

