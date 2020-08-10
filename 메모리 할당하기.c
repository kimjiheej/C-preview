#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1 = 20;

	int* numptr1;

	numptr1 = &num1;

	int* numptr2;

	numptr2 = malloc(sizeof(int));

	printf("%p\n", numptr1);
	printf("%p\n", numptr2);

	free(numptr2);









}