#include "Header.h"

int main()
{/*
	vector<wstring> LastName = readLastName();
	vector<wstring> FirstName = readFirstName();
	vector<wstring> MidName = readMidName();

	RandomIntegerGenerator rig;
	RandomIntegerGenerator random;

	for(int i = 0; i < random.next(10, 20); i++)
		wcout << FirstName[rig.next(0, 20)] <<" "<< MidName[rig.next(0, 15)] <<" "<< LastName[rig.next(0, 40)] << endl;
	return 0;*/

	RandomVietnamFullnameGenerator rvfg;

	rvfg.RandomFullName();
}