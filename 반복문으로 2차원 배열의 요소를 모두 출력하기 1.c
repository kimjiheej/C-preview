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

	for (int i = row - 1; i >= 0; i--)//마지막 요소의 개수에서 1 빼기 거꾸로 출력할때에 그렇지만 0과는 같아야 하니 0포함해서 적어주기 
	{
		for (int j = col - 1; j >= 0; j--)
		{
			printf("%d\n", numArr[i][j]);
		}
		printf("\n");
	}










}