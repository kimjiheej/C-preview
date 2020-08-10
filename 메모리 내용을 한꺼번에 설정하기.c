#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{


	long long* numptr = malloc(sizeof(long long));

	metset(numptr, 0x27, 8);

	printf("0xllx\n", *numptr);

	free(numptr);










}