#include "holberton.h"
/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char c[] = "Holberton";
	int i = 0;

	while (i < 10)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
