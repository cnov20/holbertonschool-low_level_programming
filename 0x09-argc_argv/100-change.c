#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies numbers passed as arguments on command line
 * @argc: argument count
 * @argv: argument vector (value at given index)
 *
 * Return: name of file, character string
 */

int main(int argc, char **argv)
{
	unsigned int penny, two_cent_piece, nickel, dime, quarter;
	unsigned int change;
	unsigned int num;
	unsigned int sum;

	penny = 1;
	two_cent_piece = 2;
	nickel = 5;
	dime = 10;
	quarter = 25;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);

	if (num >= 25)
       	{
		change = num / quarter;
		num %= quarter;
		sum = change + num;
	}
       	else if (num >= 10 && num <= 24)
	{
		change = num / dime;
		num %= dime;
		sum = change + num;
	}
       	else if (num >= 5 && num <= 9)
	{
		change = num / nickel;
		num %= nickel;
		sum = change + num;
	}
	else if (num >= 2 && num <=4)
	{
		change = num / two_cent_piece;
		num %= two_cent_piece;
		sum = change + num;
	}
	else
	{
		change = num / penny;
		num %= penny;
		sum = change + num;
	}


	printf("%d\n", sum);
	return (0);
}
