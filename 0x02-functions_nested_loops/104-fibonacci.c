#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0 - always - success
 */

int main(void)
{
        unsigned long num1 = 1;
        unsigned long num2 = num1 + 1;
        unsigned long result;
        char i;

        printf("%lu, %lu, ", num1, num2);

        for (i = 0; i < 48; i++)
        {
                result = num1 + num2;
                if (i != 47)
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
