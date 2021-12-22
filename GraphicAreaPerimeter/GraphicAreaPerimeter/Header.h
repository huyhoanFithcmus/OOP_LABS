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
#include <math.h>

using namespace std;

class RandomIntegerGenerator
{
public:
	RandomIntegerGenerator();
	static long long next(long long left, long long right);
};

class rectangle
{
private:
	float width;
	float height;
public:
	// Constructor
	rectangle(float width, float height);
	// Getter
	float getWidth();
	float getHeight();
	// Setter
	void setWidth(float width);
	void setHeight(float height);
	// Method
	float getArea();
	float getPerimeter();
};

class circle
{
private:
	float radius;
public:
	// Constructor
	circle(float radius);
	// Getter
	float getRadius();
	// Setter
	void setRadius(float radius);
	// Method
	float getArea();
	float getPerimeter();
};

class triangle
{
private:
	float a;
	float b;
	float c;
public:
	// Constructor
	triangle(float a, float b, float c);
	// Getter
	float getA();
	float getB();
	float getC();
	// Setter
	void setA(float a);
	void setB(float b);
	void setC(float c);
	// Method
	float getArea();
	float getPerimeter();
};


class RandomShape
{
public:
	static void printRandomShape(int size);
	static void readback(string filename);
};
