#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @code: string to encode
 *
 * Return: code encoded
 */

char *leet(char *code)
{
	char caractere[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encoding[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int index1 = 0, index2 = 0;

	for (index1 = 0; *(code + index1) != '\0'; index1++)
		for (index2 = 0; *(caractere + index2) != '\0'; index2++)
			if (*(code + index1) == *(caractere + index2))
				*(code + index1) = *(encoding + index2);

	return (code);
}
