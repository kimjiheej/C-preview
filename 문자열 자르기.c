#include<stdio.h>
#include<string.h>
int main(void)
{
	
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");//반드시 큰 따옴표로 묶어주기
	}//null 을 넣어주어야 함. 
	
	






}