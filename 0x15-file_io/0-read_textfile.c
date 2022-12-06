#include "main.h"

/**
  * read_textfile - Reads text from a file and prints into the standard output
  * @filename: name of file
  * @letters: size of bytes
  * Return: number of bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t nrd, nrw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	nrd = read(fd, buffer, letters);
	nrw = write(STDOUT_FILENO, buffer, nrd);

	close(fd);

	free(buffer);

	return (nrw);
}

