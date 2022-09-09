#include <stdio.h>
/**
 * main - Entry point
 * Description: print A-z
 * without e and q
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar(10);
	return (0);
}

