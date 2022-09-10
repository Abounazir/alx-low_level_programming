/* File: 3-print_alphabets.c */

#include <stdio.h>

/**
 * main - It prints the alphabet in lowercase, and then
 * in uppercase.
 *
 * Description: The main function should return alphabets
 * in lowercase and uppercase.
 *
 * Return:0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
