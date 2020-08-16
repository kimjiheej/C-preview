#include<stdio.h>
#include<string.h>
#include<Stdlib.h>
int main(void)
{


	char* s1 = "Hello";

	char* s2 = malloc(sizeof(char) * 10);

	strcopy(s2, s1);

	printf("%s\n", s2);

	free(s2);





}