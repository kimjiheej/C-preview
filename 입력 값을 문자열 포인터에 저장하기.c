#include<stdio.h>
#include<stdlib.h>
int main(void)
{


	char* s1 = malloc(sizeof(char) * 10);



	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s",s1);


	printf("%s\n", s1);

	free(s1);









}