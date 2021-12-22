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

class point2D
{
protected:
	int x;
	int y;
public:
	point2D();
	point2D(int x, int y);
	int getX();
	int getY();
};

class point3D : public point2D
{
private:
	int z;
public:
	point3D(int x, int y, int z) : point2D(x, y)
	{
		this->z = z;
	}
	int getZ();
	void output();
};