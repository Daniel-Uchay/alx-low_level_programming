#include <stdio.h>
/**
 * main - Entry point
 * Description: print  a-z
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}

