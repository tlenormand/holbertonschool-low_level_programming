#ifndef MAIN_H
#define MAIN_H

/*functions created before*/
int _putchar(char);
int _strlen(char *s);

/*prototypes for the exercices*/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

/*function creates in exercices*/
int len_argv(int argc, char *argv[]);
int nb_letter(int i, char *str);
int nb_word(int i, char *str);

#endif /* MAIN_H */
