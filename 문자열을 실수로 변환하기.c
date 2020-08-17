#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{

	char* s1 = "35.283672 3.e5 9.281 7.e-5";
	float num1;
	float num2;
	float num3;
	float num4;
	char* end;

		num1 = atof(s1, &end);
		num2 = strof(end, &end);
		num3 = strof(end, &end);
		num4 - strof(end, NULL);

	printf("%f %e %f %e\n", num1,num2,num3,num4);









}