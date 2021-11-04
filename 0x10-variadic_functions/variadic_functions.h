#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct search_type - struct format
 * @type: the format of the char
 * @f: function assiciated
 */

typedef struct search_type
{
	char *type;
	void (*f)(va_list);
} search_type_t;


/*functions created before*/


/*prototypes for the exercices*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/*function creates in exercices*/
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_char_pointer(va_list args);

#endif /* VARIADIC_FUNCTION_H */
