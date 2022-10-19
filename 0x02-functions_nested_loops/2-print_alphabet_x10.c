#include "main.h"
/*
 * main - prints 10 times the alphabet, in lower case
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num;

	num = 0;

	while (num < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
