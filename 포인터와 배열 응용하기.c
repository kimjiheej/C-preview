//�����Ϳ� �Ҵ�� �޸𸮸� �迭ó�� ����ϱ� 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int* numptr = malloc(sizeof(int) * 10);

	numptr[0] = 10;
	numptr[9] = 20;

	printf("%d\n", numptr[0]);
	printf("%d\n", numptr[9]);

	free(numptr);









}