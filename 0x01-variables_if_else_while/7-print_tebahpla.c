/* File: 7-print_tebahpla.c */

#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar ('\n');

	return (0);
}
