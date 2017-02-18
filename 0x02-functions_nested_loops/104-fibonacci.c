#include <stdio.h>
#include <stdint.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0 - always - success
 */

int main(void)
{
	uint64_t num1 = 1;
	uint64_t num2 = num1 + 1;
	uint64_t result;
	char i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 0; i < 96; i++)
	{
		result = num1 + num2;
		if (i != 95)
		{
			printf("%lu, ", result);
		}
		else
		{
			printf("%lu\n", result);
		}
		num1 = num2;
		num2 = result;
	}
	return (0);
}
