#include<stdio.h>
int main(void)
{

	int numArr[3][4] = {
		{11,22,33,44},
	{55,66,77,88},
	{99,110,121,132}
	};


	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = row - 1; i >= 0; i--)//������ ����� �������� 1 ���� �Ųٷ� ����Ҷ��� �׷����� 0���� ���ƾ� �ϴ� 0�����ؼ� �����ֱ� 
	{
		for (int j = col - 1; j >= 0; j--)
		{
			printf("%d\n", numArr[i][j]);
		}
		printf("\n");
	}










}