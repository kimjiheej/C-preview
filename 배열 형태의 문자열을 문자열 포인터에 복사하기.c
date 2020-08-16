#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{

	char s1[10] = "Hello";

	char* s2 = malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);









}