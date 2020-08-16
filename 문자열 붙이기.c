#include<stdio.h>
#include<String.h>
#include<stdlib.h>
int main(void)
{

	char* s1 = "world";
		char* s2 = malloc(sizeof(char) * 20);
		strcpy(s2, "Hello");
	

	
	strcat(s2, s1);

	printf("%s\n", s2);

	free(s2);
	










}