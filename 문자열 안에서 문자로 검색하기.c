#include<stdio.h>
#include<string.h>
int main(void)
{

	char s1[30] = "A Gradern Diary";

	char* ptr = strchr(s1, 'a');//a�� ã���� arden Diary �� �����Ϳ� �����.

	while (ptr != NULL);
	{

		printf("%s\n", ptr);

		ptr = strchr(ptr+1,'a');



	}






}