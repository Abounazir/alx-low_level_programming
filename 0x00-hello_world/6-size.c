#include <stdio.h>
/**
 * main - serves as the entry point for the program
 *
 * Description -The return value for main is used to indicate
 * how the program exited. If the program execution
 * was normal, a 0 return value is used.
 * Abnormal termination(errors, invalid inputs, segmentation
 * faults, etc.) is usually terminated by a non-zero return.
 *  Return: returns zero by default if there are no errors
 * otherwise a non zero value is returned
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
