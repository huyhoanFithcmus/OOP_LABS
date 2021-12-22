#include "Header.h"

int main()
{
	RandomIntegerGenerator rig;
	int size = rig.next(5, 10);
	vector<string> Fractions;

	cout << "Enter " << size << " fractions: ";
	for (int i = 0; i < size; i++)
	{
		string Frac;
		getline(cin, Frac);
		Fractions.push_back(Frac);
	}

	ofstream fo;
	fo.open("data.txt");

	for (int i = 0; i < Fractions.size(); i++)
	{
		tuple<bool, Fraction, int, string> result = FractionToStringUIConverter::convertBack(Fractions[i]);

		if (get<0>(result) == true)
		{
			cout << "succeeded" << endl;
			fo << Fractions[i] << endl;
		}
		else {
			cout << "Error code: " << get<2>(result) << ": " << get<3>(result);
		}
	}
}