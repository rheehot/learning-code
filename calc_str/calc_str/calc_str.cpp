#include "stdafx.h"
#include<iostream>


int main()
{
    char str_sample[] = "hello?";
    int len = strlen(str_sample);
    std::cout << str_sample << std::endl;
    std::cout << len << std::endl;
    strcpy_s(str_sample, "world?");
    std::cout << str_sample << std::endl;

    return 0;
}

