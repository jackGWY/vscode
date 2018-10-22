#include <iostream>
#include <string.h>
using namespace std;

//int main()
//{
//	void Print1TOMaxOfNDigits2(int n);
//	void Print1ToMaxOfDigits(int n);
//	//Print1ToMaxOfDigits(10);
//	Print1TOMaxOfNDigits2(2);
//	return 0;
//}

void Print1TOMaxOfNDigits2(int n)
{
	void Print1ToMaxRecursively(char* number, int length, int index);
	if (n <= 0)
		return;
	char* number = new char[n + 1];
	number[n] = '\0';
	for (int i = 0; i < 10; i++)
	{
		number[i] = i + '0';
		Print1ToMaxRecursively(number, n, 0);
	}
}

void Print1ToMaxRecursively(char* number, int length, int index)
{
	void PrintNumber(char * number);
	if (index == length - 1)
	{
		PrintNumber(number);
		return;
	}
	for (int i = 0; i < 10; ++i)
	{
		number[index + 1] = i + '0';
		Print1ToMaxRecursively(number, length, index + 1);
	}
}

void Print1ToMaxOfDigits(int n){
	void PrintNumber(char * number);
	bool Increment(char * number);
	if (n <= 0)
		return;
	char * number = new char[n + 1];
	memset(number, '0', n);
	number[n] = '\0';
	while (!Increment(number)){
		PrintNumber(number);
	}
	delete[] number;
}

bool Increment(char * number){
	bool isOverflow = false;

	int nTakeOver = 0;
	int nLength = strlen(number);
	for (int i = nLength - 1; i >= 0; i--)
	{
		int nsum = number[i] - '0' + nTakeOver;
		if (i == nLength - 1) //¸÷Îª¼Ó1
			nsum++;
		if (nsum >= 10)
		{
			if (i == 0)
			{
				isOverflow = true;
			}
			else{
				nsum -= 10;
				number[i] = '0' + nsum;
				nTakeOver = 1;
			}
		}
		else{
			number[i] = '0' + nsum;
			break;
		}
	}
	return isOverflow;
}

void PrintNumber(char * number)
{
	bool isBegining = true;
	int nLength = strlen(number);
	for (int i = 0; i<nLength; ++i){
		if (isBegining && number[i] != '0'){
			isBegining = false;
		}
		if (!isBegining){
			printf("%c", number[i]);
		}
	}
	printf("\t");
}
