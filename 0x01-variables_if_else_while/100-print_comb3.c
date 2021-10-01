#include <stdio.h>

/**
 * main - write digit number
 * write all single digit numbers of base 10 starting from 0, using putchar
 * Return: 0 always
 */

int main(void)
{

int i = 48;
int c = 48;
int cpt = 0;

while (i < 58)
{
	while (c < 58)
	{
		if (c != i)
		{
			putchar(i);
			putchar(c);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
			c++;
		}
		else
			c++;
	}
	cpt = cpt + 1;
	c = 48 + cpt;
	i++;
}

putchar('\n');

return (0);
}
