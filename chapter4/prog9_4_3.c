#include<stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum from 1 to n\n");
	printf("---   ---------------\n");

	triangularNumber = 0;

	n = 1;
	while(n <= 10)
	{
		triangularNumber += n;
		printf(" %i       %i\n", n, triangularNumber);
		++n;
	}

	return 0;
}
