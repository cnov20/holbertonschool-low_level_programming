#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 *
 * Description: Fizz-Buzz - print numbers 1 through 100
 * - if divisible by 3 - print 'Fizz' instead of number
 * - if divisible by 5 - print 'Buzz' instead of number
 * - if divisible by both 3 and 5 - print 'FizzBuzz'
 * instead of number
 *
 * Return: 0 - success - always
 */

int main(void)

{
	unsigned char i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
