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
	char last_d;

	last_d = n % 10;
	if (last_d == 0)
		printf("Last digit of %d is %c and is 0", n, last_d);
	else if (last_d >= 6)
		printf("Last digit of %d is %c and is greater than 5", n, last_d);
	else
		printf("Last digit of %d is %c and is less than 6 and not 0", n, last_d);
	return (0);
}
