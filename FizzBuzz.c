#include<Stdio.h>
int main(void)
{







	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");//3�� 5�� ������� ���� �˻��� �Ŀ� �Ͽ��� ��. 

		else if (i % 3 == 0)
			printf("FiZZ\n");
		else if (i % 5 == 0)
			printf("BUZZ\n");
		else
			printf("%d\n", i);

		
	}
}