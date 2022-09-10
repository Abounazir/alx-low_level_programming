/* 5-print_numbers.c */

#include <stdio.h>

/**
 * main- It prints all single digit numbers of base starting
 * * from 0.
 *
 * Description: The main function should print the desired
 * result
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
