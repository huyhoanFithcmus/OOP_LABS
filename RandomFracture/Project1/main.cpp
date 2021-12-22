#include "Header.h"

int main()
{
    RandomIntegerGenerator rng;
    int size = rng.nextInt(10, 20);
    Fraction *f = new Fraction[size];
    for (int i = 0; i < size; i++) {
        f[i].setNum(rng.nextInt(1, 100));
        f[i].setDenom(rng.nextInt(1, 100));

    }
    Fraction sum;
    sum.setNum(0);
    sum.setDenom(1);
    for (int i = 0; i < size; i++) {
        //string output = a[i].toString();
        //cout << output << endl;
        sum.add(f[i]);
    }

    sum.Print();
    return 0;
}