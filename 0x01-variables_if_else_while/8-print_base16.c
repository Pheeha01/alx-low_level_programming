#include <stdio.h>
/**
 * main - numbers of base 16 in lowercase,
 * hexidecimals
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

