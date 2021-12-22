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

class Player
{
protected:
	string name;
	int HP;
	int ATK;
public:
	virtual string getName() { return this->name; }
	virtual void input();
	int getHP() { return this->HP; }
	int getATK() { return this->ATK; }
	void setHP(int HP) { this->HP = HP; }
	void setATK(int ATK) { this->ATK = ATK; }
};


class SwordMan : public Player
{
public:
	void input();
};

class SpikeMan : public Player
{
public:
	void input();
};

class Knight : public Player
{
public:
	void input();
};

void Attack(Player &a, Player &b);

class Team
{
private:
	int size = 3;
	vector<Player*> Play_list;
public:
	void input_list();
	vector<Player*> get_list()
	{
		vector<Player*> result;
		for (int i = 0; i < this->Play_list.size(); ++i)
		{
			result.push_back(this->Play_list[i]);
		}
		return result;
	}
	void Attack_team(Team &orther)
	{
		for (int i = 0; i < this->size; ++i)
		{
			Attack(*this->Play_list[i], *orther.get_list()[i]);
		}
	}
};


