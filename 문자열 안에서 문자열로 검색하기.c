#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[100] = "A Graden Diary A Graden Diary A Graden Diary";

	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr);


	while (ptr != NULL)
	{
		printf("%s\n", ptr);

		ptr = strstr(ptr + 1, "den");
	}







}