#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <time.h>
#include <fstream>
#include <vector>
#include <locale>
#include <Windows.h>
#include <codecvt>
#include <fcntl.h>
#include <io.h>

using namespace std;

class RandomIntegerGenerator
{
public:
	RandomIntegerGenerator()
	{
		srand(time(NULL));
	}

	long long next(long long left, long long right)
	{
		return (rand() % (right - left + 1)) + left;
	}
};

class RandomVietnamFullnameGenerator {
private:
	RandomIntegerGenerator _rng;
	wstring LastName;
	wstring FirstName;
	wstring MidName;
public:
	vector<string> readfile(string fileName);
	vector<wstring> readLastName();
	vector<wstring> readFirstName();
	vector<wstring> readMidName();
	void RandomFullName();
};

//vector<string> readfile(string fileName);
//vector<wstring> readLastName();
//vector<wstring> readFirstName();
//vector<wstring> readMidName();