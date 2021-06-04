#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include<stdio.h>

int main()
{
    std::stringstream ss;
    ss << "ssfsa" << " ppp";
    std::cout << ss.str();
    return 0;
}