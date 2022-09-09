#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowecase and
 * upper case alphabets
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar(10);
	return (0);
}

