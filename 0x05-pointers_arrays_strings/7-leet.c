#include "holberton.h"

/**
 * *leet - encode a string into 1337
 * @ch: character to be encoded
 *
 * Return: encoded characters
 */

char *leet(char *ch)
{
	int i, j;

	char *ch1 = "aeotlAEOTL";
	char *ch2 = "4307143071";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; ch1[j] != '\0'; j++)
		{
			if (ch[i] == ch1[j])
			{
				ch[i] = ch2[j];
			}
		}
	}
	return (ch);
}
