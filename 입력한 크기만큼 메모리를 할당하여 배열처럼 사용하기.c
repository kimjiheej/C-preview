#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int size;

	scanf_s("%d", &size);

	int* numptr = malloc(sizeof(int) * size);

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