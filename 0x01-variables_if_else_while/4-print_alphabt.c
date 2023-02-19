#include <stdio.h>
/**
 * main - exludes alphabets
 * no Q and E
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
