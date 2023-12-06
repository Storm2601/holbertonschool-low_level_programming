#include "main.h"


/**
* read_textfile - lis un fichier texte et l'imprime sur stdout
* @filename: nom du fichier
* @letters: nombre de lettres qu'il doit lire et imprimer
*
* Return: nombre réel de lettres qu'il peut lire et imprimer
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;

	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDWR);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1)
	{
	return (0);
	}
	free(buf);
	close(o);
	return (w);
}
