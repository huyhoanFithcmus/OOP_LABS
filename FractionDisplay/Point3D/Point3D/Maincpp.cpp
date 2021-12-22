#include "Header.h"

int main()
{
	RandomIntegerGenerator rig;
	int size = rig.next(3, 7);
	cout << "enter " << size << " 3D points" << endl;
	vector<point3D> points;
	int x, y, z;
	for (int i = 0; i < size; i++)
	{
		cin >> x >> y >> z;
		points.push_back(point3D(x, y, z));
	}

	for (int i = 0; i < points.size(); i++)
	{
		points[i].output();
	}
}