#include <stdio.h>
/**
 * main - entry point
 * description'lowercase alphabets in reverse'
 * Return: 0 always (Success)
 **/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
