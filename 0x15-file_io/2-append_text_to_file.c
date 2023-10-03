#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @flnm: A pointer to the name of the file.
 * @texco: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *flnm, char *texco)
{
	int o, w, len = 0;

	if (flnm == NULL)
		return (-1);

	if (texco != NULL)
	{
		for (len = 0; texco[len];)
			len++;
	}

	o = open(flnm, O_WRONLY | O_APPEND);
	w = write(o, texco, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
