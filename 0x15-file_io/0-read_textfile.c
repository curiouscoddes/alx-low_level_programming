#include "main.h"
/**
 * read_textfile - A func to read the text file print to STDOUT
 * @filename: a param, text file being read by the func
 * @letters: total number of letters to be read
 * Return: (w) the actual number of bytes read and printed
 * returns 0 when the func fails or when the filename is NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(size0f(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
