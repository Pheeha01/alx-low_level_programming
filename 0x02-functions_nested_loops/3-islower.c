#include "main.h"
/**
 * _islower - printing lower cases
 *@c: c contains all chracters that are lower cases
 *
 * description: prints lower case characters and compares them to character
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
