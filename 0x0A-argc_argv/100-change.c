#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0, error if argc > 2
 */

int main(int argc, char *argv[])
{
	int money, i = 0, rest = 0, cpt_coin = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[1] < 0)
	{
		printf("0\n");
		return (0);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= coin[i])
		{
			if (money % coin[i] == 0)
			{
				cpt_coin += money / coin[i];
				money = rest;
				rest = 0;
				i++;
			}
			else
				money--, rest++;
		}
		else
			i++;
	}
	printf("%d\n", cpt_coin);

	return (0);
}
