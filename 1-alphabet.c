#include "main.h"

/*
 * main - print_alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

