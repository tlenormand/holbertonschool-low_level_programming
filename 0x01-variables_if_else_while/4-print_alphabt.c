#include <stdio.h>

/**
 * main - write the alphabet
 * write the alphabet using putchar
 * Return: 0 always
 */

int main(void)
{

int i = 97;

while (i < 123)
{
	if (i == 113 || i == 101)
	{
		i++;
	}
	else
	{
		putchar(i);
		i++;
	}
}

putchar('\n');

return (0);
}
