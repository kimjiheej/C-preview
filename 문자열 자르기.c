#include<stdio.h>
#include<string.h>
int main(void)
{
	
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");//�ݵ�� ū ����ǥ�� �����ֱ�
	}//null �� �־��־�� ��. 
	
	






}