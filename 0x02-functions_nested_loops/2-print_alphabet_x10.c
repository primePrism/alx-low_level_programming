#include "main.h"
/**
 * main (print_alphabet_x10): prints 10 times the alphabet, in lower
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
