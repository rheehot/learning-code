// string_compare.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
    char a[] = "hello";
    char b[] = "hello";
    int char_status = strcmp(a,b);
    string c = "world";
    string d = "world";
    int str_status = c.compare(d);

    cout << char_status << " " << str_status << endl;
    return 0;
}

