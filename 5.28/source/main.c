#include <stdio.h>
#include <stdlib.h>

char Changing_the_Case(char alphabet);

int main(void)
{
	char alphabet;
	
	printf("Please input an alphabet:\n");
	scanf_s("%c", &alphabet);
	printf("%c\n", Changing_the_Case(alphabet));

	system("pause");
	return 0;
}

char Changing_the_Case(char alphabet)
{
	char n_alphabet;

	if ((int)(alphabet) <= 90)
	{
		n_alphabet = (char)((int)(alphabet)+32);
	}
	if ((int)(alphabet) >= 97)
	{
		n_alphabet = (char)((int)(alphabet)-32);
	}

	return n_alphabet;
}