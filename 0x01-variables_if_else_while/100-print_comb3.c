#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = '0';
	while (a < '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b++);
			if (a != '8')
			{ 
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
