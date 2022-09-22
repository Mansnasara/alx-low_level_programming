#include "main.h"

/**
 * _isupper -a function that checks for uppercase character
 *
 * @c: input
 *
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
