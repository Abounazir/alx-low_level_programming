/* File: 7-print_tebahpla.c */

/**
 * main - prints the lowercase alphabets in reverse.
 *
 * Return: 0
 */

int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
