#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int hashTag;
	int tr;

	if (size > 0)
	{
		for (hashTag = 1; hashTag <= size; hashTag++)
		{
			for (tr = size - hashTag; tr > 0; tr--)
				_putchar(' ');

			for (tr = 0; tr < hashTag; tr++)
				_putchar('#');

			if (hashTag == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
