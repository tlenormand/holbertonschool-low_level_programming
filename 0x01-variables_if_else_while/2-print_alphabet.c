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
	putchar(i);
	i++;
}

putchar('\n');

return (0);
}
