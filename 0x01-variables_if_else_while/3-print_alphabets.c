#include <stdio.h>
/**
 * main - determines if the value of the random number
 * * generated is positive, zero or negative01~
 *
 * Return: returns zero ar the end
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
