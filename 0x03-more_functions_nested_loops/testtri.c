#include "holberton.h"


void print_triangle(int size)
{
	int i, j;

	for(i = 1; i <= size; i++)
	{
  /* for r th row, first print rows-r spaces then stars */
		for(j = 1; j <= size; j++){
			if(j <= size-i){
				_putchar(' ');
			} else {
				_putchar('#');
			}
		}
		/* move to next row */
		_putchar('\n');
	}
}
