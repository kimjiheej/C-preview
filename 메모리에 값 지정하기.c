#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int* numptr;

	numptr = malloc(sizeof(int));

	*numptr = 10;

	printf("%d\n", *numptr);

	free(numptr);















}