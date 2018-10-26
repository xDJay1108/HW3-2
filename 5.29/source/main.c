#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
	int a, b;

	printf("Please input two integers:\n");
	scanf_s("%d %d", &a, &b);
	//printf("%d is the GCD of(%d,%d)\n", gcd(a, b), a, b);
	printf("%d is the LCM of[%d,%d]\n", lcm(a, b), a, b);

	system("pause");
	return 0;
}

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b)
{
	return a*b / gcd(a,b);

}

