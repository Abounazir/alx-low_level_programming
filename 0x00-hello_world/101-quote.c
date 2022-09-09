#include <unistd.h>

/**
 *main-This is the program entry point.
 *
 *Description-Function Main  prints exactly
 *"and that piece of art is useful" -
 *Dora Korpar, 2015-10-19,
 *followed by a new line, to the standard error.
 *return value of main-This time, we return an error value of 1.
 */

int main(void)

{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);

}
