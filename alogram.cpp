// alogram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void BubbleSort(int *, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int a[] = { 3, 5, 1, 9, 8 };
	BubbleSort(a, 5);
	for (int i = 0; i < 5; i++){
		cout << a[i] << endl;
	}
	getchar();
	return 0;
}

void BubbleSort(int * data , int n){
	int i = 0;
	for (i; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (data[j] > data[j + 1]){
				data[j] ^= data[j + 1];
				data[j + 1] ^= data[j];
			    data[j] ^= data[j + 1];
			}
		}
	}
}

