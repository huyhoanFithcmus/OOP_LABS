#include "Header.h"

int main()
{
	/*vector<int> price;
	long long size = RandomIntegerGenerator::next(5, 10);

	cout << "please type " << size << " price: " << endl;
	for (int i = 0; i < size; i++)
	{
		int temp;
		cin >> temp;
		price.push_back(temp);
	}

	for (int i = 0; i < price.size(); i++)
	{
		cout << IntegerToCurrencyUIConverter::convert(price[i]) << endl;
	}*/
	cout << IntegerToCurrencyUIConverter::covert_int("40.000.000");
}