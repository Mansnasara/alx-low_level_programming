#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 *
 * @n: input number of times '\' should to be printed
 *
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int i = 0
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j + 0; j < i; J++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
		
