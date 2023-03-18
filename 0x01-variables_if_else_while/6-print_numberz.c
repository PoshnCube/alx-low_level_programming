#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	putchar('\n');

	return (0);
}

