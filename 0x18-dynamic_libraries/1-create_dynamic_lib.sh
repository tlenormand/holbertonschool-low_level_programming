#!/bin/bash
gcc _atoi.c _isdigit.c _isupper.c _memset.c _puts.c _strchr.c _strcpy.c _strncat.c _strpbrk.c _strstr.c _abs.c _isalpha.c _islower.c _memcpy.c _putchar.c _strcat.c _strcmp.c _strlen.c _strncpy.c _strspn.c -c -fPIC
gcc *.o -shared -o liball.so
