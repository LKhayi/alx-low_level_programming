#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: parameter to check
 * Return: always n
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
		n = -n;
	return (n);
}
