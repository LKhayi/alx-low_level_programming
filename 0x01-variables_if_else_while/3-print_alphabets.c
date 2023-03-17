#include <stdio.h>
/**
 * main - entry point
 * description: 'alphabet in lowercase then uppercase'
 * Return: 0 always
 **/
int main(void)
{
	int n = 97;
	int N = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (N <= 90)
	{
		putchar(N);
		N++;
	}
	putchar('\n');
	return (0);
}
