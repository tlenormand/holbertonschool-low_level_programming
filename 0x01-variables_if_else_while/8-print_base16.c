#include <stdio.h>

/**
 * main - write digit number
 * write all single digit numbers of base 10 starting from 0, using putchar
 * Return: 0 always
 */

int main(void)
{

int i = 48;

while (i < 58)
{
	putchar(i);
	i++;
}

i = 97;

while (i < 103)
{
	putchar(i);
	i++;
}

putchar('\n');

return (0);
}
