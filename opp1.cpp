#include "FloatPower.h"
#include <iostream>
#include <cmath>
using namespace std;

FloatPower makeIntPower(int x, int y)
{
    FloatPower nn;
    if (!nn.Init(x, y))
        cout << "wrong argument to Init (second)" << endl;
    return nn;
}

int main()
{
    FloatPower k;
    k.Read();
    k.Display();
    k.GetFirst();
    k.GetSecond();

    return 0;
}


