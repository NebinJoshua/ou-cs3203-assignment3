//============================================================================
// Name        : 1.cpp
// Author      : Nebin Joshua
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int arr[]) {
	int sum = 0;
	for(int i = 0; i <= sizeof(arr); i++){
		sum = sum + arr[i];
	}
	return sum;
}
