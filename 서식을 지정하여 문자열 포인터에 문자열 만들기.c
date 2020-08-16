#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	char* s1 = malloc(sizeof(char) * 20);

	sprinf(s1, "Hello,%s", "world!");

	printf("%s\n", s1);

	free(s1);









}