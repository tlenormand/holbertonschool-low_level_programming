#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct format - Struct format
 * @formats: The format of the char
 * @f: function assiciated
 */

typedef struct format
{
	char formats;

	void (*f)(void);
} format_t;


/*functions created before*/


/*prototypes for the exercices*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/*function creates in exercices*/
void print_char(char str);
void print_integer(int str);
void print_float(float str);
void print_char_pointer(char *str);

#endif /* VARIADIC_FUNCTION_H */
