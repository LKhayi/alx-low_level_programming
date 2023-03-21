#include "main.h"
/**
 *print_sign - a function that prints the sign of a number
 *@n: parameter to check
 *Return: 1 if n is greater than 0, -1 if n is less than 0, 0 otherwise
 **/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
}
