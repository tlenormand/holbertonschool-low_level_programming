#include <stdio.h>

/**
 * main - write digit number
 * write all single digit numbers of base 10 starting from 0, using putchar
 * Return: 0 always
 */

int main(void)
{
int c = 48;
int d = 49;
int u = 50;
	while (c < 58)
	{
		while (d < 58)
		{
			while (u < 58)
			{
				if (c == d || d == u || u == c)
				{

				}
				else
				{
					putchar(c);
					putchar(d);
					putchar(u);
					if (c == 55 && d == 56 && u == 57)
					{

					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
				u++;
			}
			u = d + 1;
			d++;
		}
		d = c + 1;
		c++;
	}

putchar('\n');

return (0);
}
