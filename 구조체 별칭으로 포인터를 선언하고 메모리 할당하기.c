#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _person//person 지워도 됨. 
{
	char name[20];
	int age;
	char address[100];
}person;
int main(void)
{

	person* p1 = malloc(sizeof(person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");
	

	printf("이름 :%s\n", p1->name);
	printf("나이:%d\n", p1->age);
	printf("주소:%s\n", p1->address);

	free(p1);








}