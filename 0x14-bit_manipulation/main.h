#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/*functions created before*/
int _putchar(char c);
int _strlen(const char *s);

/*prototypes for the exercices*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

/*function creates in exercices*/


#endif /* MAIN_H */
