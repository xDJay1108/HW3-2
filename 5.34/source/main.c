#include <stdio.h>
#include <stdlib.h>

long int power(int base, int exponent);

int main(void)
{
	int base, exponent;

	printf("base:");
	scanf_s("%d", &base);
	printf("exponent:");
	scanf_s("%d", &exponent);
	printf("Ans=%d\n", power(base, exponent));

	system("pause");
	return 0;
}

long int power(int base, int exponent)
{
	if (exponent > 1)
	{
		long int result = base*power(base, exponent - 1);
	}
	else if (exponent == 1)
	{
		return base;
	}
}