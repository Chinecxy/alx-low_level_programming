#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar(' ');
				else
				{
					_putchar(35);
					if (j == size)
						_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
