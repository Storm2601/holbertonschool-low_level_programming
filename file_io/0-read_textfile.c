#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(o);
	free(buf);
	return (w);
}
