#include "main.h"

/**
 * append_text_to_file - Appends and write text at the end of a file.
 * @filename: the pointer to which the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	u = write(z, text_content, len);

	if (z == -1 || u == -1)
		return (-1);

	close(z);

	return (1);
}
