#include<stdio.h>
#include "main.h"

/**
 * print_aphabet - prints the lower case alphabets
 * Return: nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'a')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
