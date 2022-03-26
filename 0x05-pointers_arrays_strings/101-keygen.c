#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password
 *
 * Return: 0 always
 */

int main(void)
{
	int total = 2772;
	char password;

	srand(time(NULL));
	while (total > 126)
	{
		password = rand() % 126;
		printf("%c", password);
		total -= password;
	}

	printf("%c", total);
	return(0);
}
