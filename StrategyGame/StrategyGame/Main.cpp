#include "Header.h"

int main()
{
	Team A;
	cout << "Team A: " << endl;
	A.input_list();
	vector<Player*> A_list = A.get_list();
	Team B;
	cout << "Team B: " << endl;
	B.input_list();
	vector<Player*> B_list = B.get_list();

	int start_num = RandomIntegerGenerator::next(1, 2);
	if (start_num == 1)
		cout << "Team A go first !!" << endl;
	if (start_num == 2)
		cout << "Team B go first !!" << endl;


	for (int i = 0; i < 3; i++)
	{
		if (start_num == 1)
		{
			// A first
			A.Attack_team(B);
			B.Attack_team(A);
		}
		if (start_num == 2)
		{
			// B first
			A.Attack_team(B);
			B.Attack_team(A);
		}
	}
	cout << "Team A: ";
	for (int i = 0; i < A_list.size(); i++)
	{
		cout << A_list[i]->getName() << "(" << A_list[i]->getHP() << ", " << A_list[i]->getATK() << ")" << " ";
	}
	cout << endl;
	cout << "Team B: ";
	for (int i = 0; i < A_list.size(); i++)
	{
		cout << B_list[i]->getName() << "(" << B_list[i]->getHP() << ", " << B_list[i]->getATK() << ")" << " ";
	}
	return 0;
}