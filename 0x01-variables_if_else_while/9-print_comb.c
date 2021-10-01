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
	if (i < 58)
		putchar(44);
	putchar(32);
	
}

putchar('\n');

return (0);
}
