#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int x = 0;

	while (i < 10)
	{
		while (x < 10)
		{
			if (i != x && i < x)
			{
				putchar('0' + i);
				putchar('0' + x);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
