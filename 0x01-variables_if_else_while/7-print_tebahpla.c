/* File: 7-print_tebahpla.c */

/**
 * main - prints the lowercase alphabets in reverse.
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar ('\n');

	return (0);
}
