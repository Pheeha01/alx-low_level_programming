#include "main.h"
/**
 * main - lowercase Alphabets
 * _putchar
 * Return: always 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
