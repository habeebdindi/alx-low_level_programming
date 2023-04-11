#include "main.h"
#include <string.h>
/**
 * create_file - function creates a file.
 * @filename: pointer to the name of the file.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nbytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (text_content)
		nbytes = write(fd, text_content, strlen(text_content));
	else
		nbytes = write(fd, "\0", 1);

	if (nbytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
