#include<stdio.h>
#include<stdlib.h>
#define YEARS 3	
#define PRODUCTS 5
int sum(int scores[YEARS][PRODUCTS]);
int main(void)
{

	int sales[YEARS][PRODUCTS] =
	{
		{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int total_sale;

	total_sale = sum(sales);//�Լ��� 2���� �迭�� �̸��� �־��ֱ�. 
	printf("�Ѹ����� %d�Դϴ�\n", total_sale);

}
int sum(int scores[YEARS][PRODUCTS])
{

	int i, j;
	int total = 0;

	for (i = 0; i < YEARS; i++)
		for (j = 0; j < PRODUCTS; j++)
			total += scores[i][j];

	return total;









}