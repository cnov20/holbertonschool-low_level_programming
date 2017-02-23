#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be appended
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n;
        int i,j;

        for(i=0; dest[i] != '\0'; i++)
        {
        }
        for(j=0; src[j] != '\0'; j++, i++)
        {
                dest[i] = src[j];
        }

        return (dest);
}
