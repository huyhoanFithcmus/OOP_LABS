#include "Header.h"

point2D::point2D()
{
	this->x = 0;
	this->y = 0;
}

point2D::point2D(int x, int y)
{
	this->x = x;
	this->y = y;
}

int point2D::getX()
{
	return x;
}

int point2D::getY()
{
	return y;
}

int point3D::getZ()
{
	return this->z;
}

void point3D::output()
{
	cout << "{ " << getX() << ", " << getY() << ", " << getZ() << " }" << endl;
}

RandomIntegerGenerator::RandomIntegerGenerator()
{
	srand(time(NULL));
}

long long RandomIntegerGenerator::next(long long left, long long right)
{
	return (rand() % (right - left + 1)) + left;
}