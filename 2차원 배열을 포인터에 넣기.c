#include<stdio.h>
int main(void)
{


	int numArr[3][4] =
	{
		{11,22,33,44},
	{55,66,77,88},
	{99,110,121,132}
	};

	int(*numptr)[4] = numArr;
	printf("%d\n", *numptr);//세로의 첫번째 주솟값이 나옴.
	printf("%p\n", *numArr);//세로의 첫번째 주솟값이 나옴.

	printf("%d\n", numptr[2][1]);
	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numptr));

	//오류가 남.
	//2차원 배열을 포인터에 넣으려면 자료형(*포인터이름)[가로크기];
	//int (*numptr)[4]; 세로 크기는 몰라도 됨.
	//3차원 배열은 3개로 나누어줌. 












}