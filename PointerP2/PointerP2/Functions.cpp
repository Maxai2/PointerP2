#include <iostream>
#include <time.h>

using namespace std;

void initialShowArr(int *arr, int length)
{
	srand(time(0));

	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 40 - 10;
		cout << arr[i] << " ";
	}
}

void sumMult(int *arr, int length, int &sum, long &mult)
{
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
		mult *= arr[i];
	}
}

void sort(int *arr, int length, int &neg, int &zero, int &pos)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < 0)
			neg++;
		else if (arr[i] == 0)
			zero++;
		else if (arr[i] > 0)
			pos++;
	}
}