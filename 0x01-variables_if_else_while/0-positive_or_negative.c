/* File: 0-positive_or_negative.c */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - It prints a random number and states
 * whether it is positive, negative or zero.
 *
 * Description: Using the main function, we should
 * get one of three answers.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
