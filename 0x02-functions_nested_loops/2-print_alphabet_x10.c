#include "main.h"

/**
*print_alphabet_x10 -prints alphabet 10 times
*return: 0 if success
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 97; c <= 122; c++)
		_putchar(c);
	_putchar('\n');
	}
}
