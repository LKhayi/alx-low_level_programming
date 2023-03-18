#include <stdio.h>
/**
 * main - entry point
 * description:'print all single digit numbers'
 * Return: 0 always (Success)
 **/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
