#include<stdio.h>

/**
 * main - Print number from 0 to 10.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	for  (i = 0; i < 10; i++)
	{
		purchar("%d", i);
	}
	putchar('\n');
	return (0);
}
