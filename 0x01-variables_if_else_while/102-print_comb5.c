#include <stdio.h>

/**
 * main - prints all possible different combinations of 3 digits.
 *
 * Return: 0 always
 */

int main(void)
{
	int num1, num2;

	num1 = 0;
	num2 = num1 + 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(32);
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 98 && num2 == 99)
			{

			}
			else
			{
				putchar(44);
				putchar(32);
			}
		num2++;
		}
	num2 = num1 + 1;
	num1++;
	}

	putchar('\n');

	return (0);
}
