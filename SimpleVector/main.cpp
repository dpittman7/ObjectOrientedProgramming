#include <iostream>
#include "simplevector.h"   // Or you can use simplevector.cpp
using namespace std;
int main(void)
{
    const int SIZE=10;
    int count;
    SimpleVector<int> o(SIZE);
    SimpleVector<double> p(SIZE);

    for( int i = 0; i < SIZE; i++)
        o[i] = (i * 3);

    for(int i = 0; i<SIZE; i++)
    {
        cout << o.getElementAt(i) << " ";
    }
    cout << endl;
    SimpleVector<int> q(o);

    for(int i = 3; i < q.size(); i++)
        q[i] = q.getElementAt(i) * i;

    for(int i = 0; i<SIZE; i++)
    {
        cout << q.getElementAt(i) << " ";
    }

}