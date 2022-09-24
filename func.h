#pragma once
#include <iostream>
using namespace std;

int func1(int parameter)
{
	static int x = 0;
	cout << (parameter+x) << endl;
	x = parameter;
	return (0);
}
