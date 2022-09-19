#include "main.h"
/**
 * print_rev - prints the string in reverse order
 * @s: a variable string
 * Return: none
 */
void print_rev(char *s)
{
	int j, a, b;

	for (a = 0; s[a] != '\0'; a++)
		j = a;
	for (b = j; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}

