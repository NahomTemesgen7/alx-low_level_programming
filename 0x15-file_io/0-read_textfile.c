#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *nah;
	ssize_t fntd;
	ssize_t w;
	ssize_t r;

	fntd = open(filename, O_RDONLY);
	if (fntd == -1)
		return (0);
	nah = malloc(sizeof(char) * letters);
	r = read(fntd, nah, letters);
	w = write(STDOUT_FILENO, nah, r);

	free(nah);
	close(fntd);
	return (w);
}
