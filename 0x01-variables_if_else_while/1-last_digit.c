#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - The last digit
*using modulas
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_d;

	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_d);
	}
	else
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, last_d);
	};
	return (0);
}
