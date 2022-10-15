#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0  */

int main(void)
{
	char wds;

	for (wds = 'a'; wds <= 'z'; wds++)
	{
		putchar(wds);
	}
	putchar('\n');
	return (0);
}
