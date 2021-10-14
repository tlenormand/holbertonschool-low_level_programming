#include "main.h"

/**
 * rot13 - function that encodes a string into ROT13
 * @code: string to encode
 * Return: code encoded
 */

char *rot13(char *code)
{

	char caractere[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoding[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index1 = 0, index2 = 0;

	for (index1 = 0; *(code + index1) != '\0'; index1++)
		for (index2 = 0; *(caractere + index2) != '\0'; index2++)
			if (*(code + index1) == *(caractere + index2))
			{
				*(code + index1) = *(encoding + index2);
				break;
			}

	return (code);
}
