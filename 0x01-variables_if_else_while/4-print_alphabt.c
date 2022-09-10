/* 4-print_alphabt */

#include <stdio.h>

/**
 * main - Prints the alpbabet in lowercase, except for q and e.
 *
 * Description - The main function should generate lowercase
 * alphabets except q and e.
 *
 * Return: 0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar ('\n');

	return (0);
}
