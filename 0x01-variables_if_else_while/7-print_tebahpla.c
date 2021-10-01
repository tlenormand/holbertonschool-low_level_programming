#include <stdio.h>

/**
 * main - write the reverse alphabet
 * write the alphabet using putchar
 * Return: 0 always
 */

int main(void)
{

int i = 57;

while (i > 47)
{
	putchar(i);
	i--;
}

putchar('\n');

return (0);
}
