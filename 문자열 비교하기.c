#include<stdio.h>
#include<string.h>

int main(void)
{

	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하세요: ");
	scanf_s("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("두 문자열이 같음\n");
		break;
	case 1:
		printf("%s 보다 %s 가 큼\n", s2, s1);
		break;
	case -1:
		printf("%s 보다 %s가 큼\n", s1, s2);
		break;
	}









}