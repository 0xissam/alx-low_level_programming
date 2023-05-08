#include "main.h"

/**
 * read_textfile - and prints it to the POSIX standard output.
 * @filename: the file
 * @letters: number
 *
 * Return:the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numletters;
	int Fl;
	char *pF;

	if (!filename)
		return (0);
	pF = malloc(sizeof(char) * letters + 1);
	if (pF == NULL)
		return (0);
	Fl = open(filename, O_RDONLY);
	if (Fl == -1)
	{

		free(pF);
		return (0);
	}
	numletters = read(Fl, pF, sizeof(char) * letters);
	if (numletters == -1)
	{
		free(pF);
		close(Fl);
		return (0);
	}
	numletters = write(STDOUT_FILENO, pF, numletters);
	if (numletters == 1)
	{
		free(pF);
		close(Fl);
		return (0);
	}
	free(pF);
	close(Fl);
	return (numletters);
}
