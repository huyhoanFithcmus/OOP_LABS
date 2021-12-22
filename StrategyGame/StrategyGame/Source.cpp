#include "Header.h"

// class Player

void Player::input()
{
	cout << "the Player name is: ";
}

// class Swordman

void SwordMan::input()
{
	Player::input();
	this->name = "SwordMan";
	cout << endl;
}


// class Spikeman

void SpikeMan::input()
{
	Player::input();
	this->name = "SpikeMan";
	cout << endl;
}

// class Knight

void Knight::input()
{
	Player::input();
	this->name = "Knight";
	cout << endl;
}

// class Integer
RandomIntegerGenerator::RandomIntegerGenerator()
{
	srand(time(NULL));
}

long long RandomIntegerGenerator::next(long long left, long long right)
{
	return (rand() % (right - left + 1)) + left;
}

// class Team

void Team::input_list()
{
	int type;
	Player* p;
	for (int i = 0; i < this->size; i++)
	{
		type = RandomIntegerGenerator::next(1, 3);
		if (type == 1)
		{
			p = new SwordMan;
			p->input();
			cout << p->getName() << endl;
			p->setHP(1000);
			p->setATK(12);
			this->Play_list.push_back(p);
		}
		if(type == 2)
		{
			p = new SpikeMan;
			p->input();
			cout << p->getName() << endl;
			p->setHP(800);
			p->setATK(8);
			this->Play_list.push_back(p);
		}
		if(type == 3)
		{
			p = new Knight;
			p->input();
			cout << p->getName() << endl;
			p->setATK(18);
			p->setHP(1500);
			this->Play_list.push_back(p);
		}
	}
}


void Attack(Player &a, Player &b)
{
	if (a.getName() == "SwordMan" && b.getName() == "SpikerMan") // 1 2
	{
		cout << "SwordMan's ATK + 12" << endl;
		a.setATK(a.getATK() + 12);
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}
	if (b.getName() == "SpikerMan" && b.getName() == "SwordMan") // 2 1
	{
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}

	if (a.getName() == "SpikeMan" && b.getName() == "Knight") // 2 3
	{
		a.setATK(a.getATK() + 25);
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}
	if (a.getName() == "Knight" && b.getName() == "SpikeMan") // 3 2
	{
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}

	if (a.getName() == "SwordMan" && b.getName() == "Knight") // 1 3
	{
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}

	if (a.getName() == "Knight" && b.getName() == "SwordMan") // 3 1
	{
		a.setATK(a.getATK() + 10);
		int temp = a.getATK();
		b.setHP(b.getHP() - temp);
	}
}


