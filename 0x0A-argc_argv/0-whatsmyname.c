#include "main.h"
#include <stdio.h>

/**
 * main - prints the name followed with a new line
 * @argc: number of argumemt supplied to the program.
 *@argv: An array of the pointers of the arguments
 *Returns: (0).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
