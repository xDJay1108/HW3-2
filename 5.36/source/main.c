#include <stdio.h>
#include <stdlib.h>

void towers(int count, char src, char spare, char dest);//來源=1 輔助=2 目的=3

int main(void)
{
	int number;

	printf("Towers of Hanoi\n");
	printf("Enter a number of disks to play. I'll give necessary moves.\n");
	scanf_s("%d", &number);
	printf("Moving %d disks:\n", number);
	towers(number, '1', '2', '3');

	system("pause");
	return 0;
}

void towers(int count, char src, char spare, char dest)//來源=1 輔助=2 目的=3
{
	if (count == 1)
		printf("Move a disk from peg %c to peg %c\n",src,dest);
	else
	{
		towers(count - 1, src, dest, spare);
		printf("Move a disk from peg %c to peg %c\n", src, dest);
		towers(count - 1, spare, src, dest);
	}
}