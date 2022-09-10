/* File: 2-print_alphabet.c*/

#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Description - The main function should return the alphabets
 * in lowercase
 *
 * Return: 0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}