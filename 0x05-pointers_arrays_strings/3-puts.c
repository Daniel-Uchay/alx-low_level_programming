#include "main.h"
/**
 * _puts - function that prints a string to stdout
 * @str: a variable to be printed
 * Return: zero
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar(10);
}

