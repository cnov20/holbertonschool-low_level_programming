#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0 - always - success
 */

int main(void)
{
        unsigned long num1 = 1;
        unsigned long num2 = 2;
        unsigned long result = 0;
        unsigned long eventotal = 2;

        while (result < 4000000)
        {
                result = num1 + num2;
                if (result % 2 == 0)
                {
                        eventotal = eventotal + result;
                }
                num1 = num2;
                num2 = result;
        }
        printf("%lu", eventotal);
        printf("\n");
        return (0);
}
