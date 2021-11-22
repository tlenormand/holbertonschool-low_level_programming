#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/*functions created before*/
int _strlen(char *s);

/*prototypes for the exercices*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*function creates in exercices*/
void cp_content(const char *file_from, const char *file_to);
void _close(int fd);


#endif /* MAIN_H */
