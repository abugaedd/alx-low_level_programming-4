#include "main.h"

/**
 *_puts - print a string to standard output
 *@str: pointer to string address
 *Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
		_putchar('\n');
	}
}
