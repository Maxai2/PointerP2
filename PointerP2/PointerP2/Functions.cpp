#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

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

void initialArrTwoShow(int **arr, int fSize, int sSize)
{
	srand(time(0));
	short row = 3, col = 8;
	for (int i = 0; i < fSize; i++)
	{
		for (int j = 0; j < sSize; j++)
		{
			arr[i][j] = rand() % 20;
			SetConsoleCursorPosition(h, { col, row });
			cout << arr[i][j];
			col += 4;
		}
		col = 8; row++;
	}
}

void avarageEvenOdd(int **arr, int fSize, int sSize, int &avarage, int &even, int &odd)
{
	for (int i = 0; i < fSize; i++)
	{
		for (int j = 0; j < sSize; j++)
		{
			avarage += arr[i][j];

			if (arr[i][j] % 2 == 0)
				even++;
			else
				odd++;
		}
	}
	avarage /= (fSize * sSize);
}
