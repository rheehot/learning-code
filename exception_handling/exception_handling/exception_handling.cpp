#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }
            cout << a << "/" << b << "=" << a / b << endl;
    }
    catch (int exception) {
        cout << "exception handling! " << b << endl;
    }
    return 0;
}