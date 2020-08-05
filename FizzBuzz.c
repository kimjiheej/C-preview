#include<Stdio.h>
int main(void)
{







	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");//3과 5의 공배수를 먼저 검사한 후에 하여야 함. 

		else if (i % 3 == 0)
			printf("FiZZ\n");
		else if (i % 5 == 0)
			printf("BUZZ\n");
		else
			printf("%d\n", i);

		
	}
}