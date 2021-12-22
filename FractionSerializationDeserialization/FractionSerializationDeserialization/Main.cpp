#include "Header.h"

int main()
{
	Overwrite f;
	vector<Fraction> frac = f.readFrac("data.txt");
	f.writeFile(frac);

	remove("data.txt");
	rename("Temp.txt", "data.txt");
}