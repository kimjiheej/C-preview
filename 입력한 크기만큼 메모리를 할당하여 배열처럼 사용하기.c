#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int size;

	scanf_s("%d\n", &size);

	int* numptr = malloc(sizeof(int) * size);//�޸� �Ҵ� 

	for (int i = 0; i < size; i++)
	{
		numptr[i] = i;

	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", numptr[i]);
	}

	free(numptr);










}