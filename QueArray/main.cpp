#include <iostream>
#include "queArray.h"
#include "queArray.cpp"

using namespace std;

int main()
{

    QueArray <int> obj1(5);
    int n;
    obj1.enQue(8);
    obj1.enQue(15);
    obj1.enQue(47);
    obj1.enQue(69);
    obj1.enQue(70);
    obj1.deQue(n);
    obj1.print();
    return 0;
}
