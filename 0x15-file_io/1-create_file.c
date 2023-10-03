#include "main.h"

/**
 * create_file - Creates a file.
 * @flnm: A pointer to the name of the file to create.
 * @texco: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *flnm, char *texco)
{
	int fd, w, len = 0;

	if (flnm == NULL)
		return (-1);

	if (texco != NULL)
	{
		for (len = 0; texco[len];)
			len++;
	}

	fd = open(flnm, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, texco, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
