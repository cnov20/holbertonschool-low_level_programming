#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

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

	printf("%" PRIu64 "%" PRIu64 , num1, num2);

	for (i = 0; i < 96; i++)
	{
		result = num1 + num2;
		if (i != 95)
		{
			printf("%" PRIu64 ", ", result);
		}
		else
		{
			printf("%" PRIu64 "\n", result);
		}
		num1 = num2;
		num2 = result;
	}
	return (0);
}
