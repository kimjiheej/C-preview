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
	printf("%d\n", *numptr);//������ ù��° �ּڰ��� ����.
	printf("%p\n", *numArr);//������ ù��° �ּڰ��� ����.

	printf("%d\n", numptr[2][1]);
	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numptr));

	//������ ��.
	//2���� �迭�� �����Ϳ� �������� �ڷ���(*�������̸�)[����ũ��];
	//int (*numptr)[4]; ���� ũ��� ���� ��.
	//3���� �迭�� 3���� ��������. 












}