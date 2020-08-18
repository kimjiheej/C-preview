#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char name[20];
	int age;
	char address[100];
};
int main(void)
{

	struct person* p1 = malloc(sizeof(struct person));
  
	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("이름 :%s\n", p1->name);
	printf("나이:%d\n", p1->age);
	printf("주소:%s\n", p1->address);

	free(p1);









}