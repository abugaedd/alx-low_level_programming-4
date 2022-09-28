#include "main.h"

/**
 * _print_rev_recursion - prints a string using recursion in reverse
 *@s: string to be printed
 *Return: nothing
 */

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);

	if (*s == '\0')
		return;
}
