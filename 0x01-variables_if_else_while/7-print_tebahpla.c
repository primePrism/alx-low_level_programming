#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char wds;

	for (wds = 'z'; wds >= 'a'; wds--)
	{
		putchar(wds);
	}
	putchar('\n');
	return (0);
}
