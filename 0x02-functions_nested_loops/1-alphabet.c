/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line
 * and returs 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}

