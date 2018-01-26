// CST116SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	double a;
	std::cout << "Enter a number" << std::endl;
	std::cin >> a;
	std::cout << std::scientific;
	std::cout << a;
	return 0;
}
