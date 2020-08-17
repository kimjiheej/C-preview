#include<stdio.h>
#include<string.h>
int main(void)
{

	char s1[30] = "A Gradern Diary";

	char* ptr = strchr(s1, 'a');//a를 찾은후 arden Diary 가 포인터에 저장됨.

	while (ptr != NULL);
	{

		printf("%s\n", ptr);

		ptr = strchr(ptr+1,'a');



	}






}