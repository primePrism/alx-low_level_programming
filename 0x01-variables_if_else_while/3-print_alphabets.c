#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int wds;

	for (wds = 'a'; wds <= 'z'; wds++)
		putchar(wds);
	for (wds = 'A'; wds <= 'Z'; wds++)
		putchar(wds);
	putchar('\n');
	return (0);
}
