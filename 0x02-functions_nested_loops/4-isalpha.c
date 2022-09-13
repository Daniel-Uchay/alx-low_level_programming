#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: takes 1 argument c
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

