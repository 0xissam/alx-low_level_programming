#include "main.h"

/**
 * create_file - create a file with name filename
 * @filename: the file
 * @text_content:file information to write
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int inf;
	int numl;
	int cr;

	if (!filename)
		return (-1);

	inf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (inf == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (numl = 0; text_content[numl]; numl++)
		;
	cr = write(inf, text_content, numl);

	if (cr == -1)
		return (-1);
	close(inf);
		return (1);
}
