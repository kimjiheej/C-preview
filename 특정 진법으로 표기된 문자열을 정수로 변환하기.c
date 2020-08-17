#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{

    char* s1 = "0xaf10";

    int num1;

    num1 = strtol(s1, NULL, 16);
    //NULL을 넣는 이유는 여러개의 문자로 표현된. 
    printf("%x %d\n", num1, num1);









}