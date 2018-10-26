#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("Please input n (<=93):");
	scanf_s("%d", &n);
	printf("fibonacci(%u)=%llu\n", n, fibonacci(n));	
	
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	int count;
	unsigned long long int result=0;
	unsigned long long int temp=0, temp1=0 ;

	if (n == 0)
	{
		result = 0;
	}
	else if (n == 1)
	{
		result = 1;
	}
	else if ((n >= 2)&&(n<=93))
	{
		result = 1;
		temp = 0;
		temp1 = 1;
		for (count = 1; count<n; count++)
		{
			result = temp + temp1;
			if (count % 2 == 1)
			{
				temp = result;
			}
			else if (count % 2 == 0)
			{
				temp1 = result;
			}
		}
	}
	else if(n > 93)
	{
		printf("fibonacci(%u)>2^64-1, exceeding the calculation range.\n",n);
	}
	return result;
}