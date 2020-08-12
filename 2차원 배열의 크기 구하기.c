#include<stdio.h>
int main(void)
{

	int numArr[3][4] = {

		{11,22,33,44},
	{55,66,77,88},
	{99,110,121,132}


	};


	printf("%d\n", sizeof(numArr));

	int col = sizeof(numArr[0]) / sizeof(int);//가로
	int row = sizeof(numArr) / sizeof(numArr[0]);//세로 

	printf("%d\n", col);
	printf("%d\n", row);












}