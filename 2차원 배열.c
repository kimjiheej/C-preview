//3x5 ũ���� ������ 2���� �迭 s[]�� �����ϰ� �� �迭 ��ҿ� 0���� 99������ ������ �����ϰ� ����ϴ� ���α׷��� �ۼ��� ����.

#include<stdio.h>
#include<stdlib.h>
#define ROWS 3
#define COLS 5

int main(void)
{
	int s[ROWS][COLS];
	int i, j;

	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			s[i][j] = rand() % 100;//�迭�� �������� �־��ֱ�.

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);//�迭�� �״�� �־��ָ� ��
		printf("\n");
	}










}