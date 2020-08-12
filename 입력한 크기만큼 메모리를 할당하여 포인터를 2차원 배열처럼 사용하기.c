#include<stdio.h>
#include<stdlib.h>
int main(void)
{


	int row, col;

	scanf_s("%d %d", &row, &col);

	int** m = malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
		m[i] = malloc(sizeof(int) * col);

	for(int i=0; i<row; i++)
		for (int j = 0; j < col; j++)
		{
			m[i][j]= i+j;
		}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			printf("%d", m[i][j]);
	printf("\n");

	for (int i = 0; i < row; i++)
		free(m[i]);//가로 해제

	free(m); //세로 해제 










}