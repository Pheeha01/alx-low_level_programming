#include "main.h"
/**
 * print_alphabet_x10 - alphabets in 10 lines
 * _putchar
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
	_putchar('\n');
	}
}
