// XFormation.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Array.h"
#include <iostream>

int main()
{
	const int size = 6;
	Array<int> *arr = new Array<int>(3);

	arr->Set(2, 3);
	std::cout << arr->Get(2) << std::endl;

	int endingKey;
	std::cin >> endingKey;
	
    return 0;
}

