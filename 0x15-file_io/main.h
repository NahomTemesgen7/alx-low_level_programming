#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *flnm, size_t late);
int create_file(const char *flnm, char *texco);
int append_text_to_file(const char *flnm, char *texco);

#endif
