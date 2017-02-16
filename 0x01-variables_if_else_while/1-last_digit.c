#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of program
 *
 * printnf - works in conjunction with rand () function to output (print) the
 * last digit of each number
 *
 * Return: 0 - Always - Success
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit,
		       "and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit,
		       "and is 0\n");
	}
	else if (last_digit < 6 && n != 0)
	{
		printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit,
		       "and is less than 6 and not 0\n");
	}

	return (0);
}
