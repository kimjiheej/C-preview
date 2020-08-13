//3x5 크기의 정수형 2차원 배열 s[]을 정의하고 이 배열 요소에 0에서 99까지의 난수를 저장하고 출력하는 프로그램을 작성해 보자.

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
			s[i][j] = rand() % 100;//배열이 무엇인지 넣어주기.

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);//배열을 그대로 넣어주면 됨
		printf("\n");
	}










}