#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: 0
 */
int main(void)
{
	char wds = 'a';

	while (wds <= 'z')
	{
		if (wds != 'e' && wds != 'q')
		{
			putchar(wds);
		}
		wds++;
	}
	putchar('\n');
	return (0);
}
