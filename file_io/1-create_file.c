#include "main.h"

/**
* create_file - création d'un fichier
* @filename: nom du fichier
* @text_content: chaîne caractère termine par NULL à écrire dans le fichier
* Return: 1 en cas de réussite et -1 en cas d'échec
*/
int create_file(const char *filename, char *text_content)
{
	int o, w;

	int count = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		w = write(o, text_content, count);

		if (w == -1)
		{
			return (-1);
		}
	}
	return (1);
}
