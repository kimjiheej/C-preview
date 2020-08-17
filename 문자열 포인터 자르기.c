#include<stdio.h>
#include<string.h>
#include<Stdlib.h>
int main(void)
{

	char* s1 = malloc(sizeof(char) * 30);


	strcpy(s1, "The Little Prince");

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}







}
