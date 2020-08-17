#include<stdio.h>
#include<String.h>
#include<stdlib.h>
int main(void)
{

	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };
	int i = 0;

	char* ptr = strtok(s1, " ");


	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;
	}

	ptr = strtok(NULL, " ");

	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL)
			printf("%s\n", sArr[i]);
	}








}