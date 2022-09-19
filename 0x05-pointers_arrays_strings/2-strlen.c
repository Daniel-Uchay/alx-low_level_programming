#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is the character pointer
 * Return: zero
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

