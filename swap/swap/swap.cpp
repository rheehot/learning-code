#include "stdafx.h"
#include<iostream>

using namespace std;

int main(void)
{
    int a, b,tmp;
    cout << "enter A : ";
    cin >> a;
    cout << "enter B : ";
    cin >> b;

    cout << "swap A and B" << endl;

    tmp = a;
    a = b;
    b = tmp;

    cout << "A : "<< a << endl;
    cout << "B : " << b << endl;

    return 0;
}

