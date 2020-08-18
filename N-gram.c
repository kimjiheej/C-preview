#include<stdio.h>
#include<string.h>
int main(void)
{

	char text[30] = "Hello";

	int length;

	length = strlne(text);

	for (int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", text[i], text[i + 1]);
	}









}