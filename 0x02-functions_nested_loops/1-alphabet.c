#include "main.h"

/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line
 * and returs 0
 */
void print_alphabet(void)
{
	char alph;

	alph  = 'a';

	while (alph  <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}

