#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *description = main- print alphabet
 *Return: 0 if success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
