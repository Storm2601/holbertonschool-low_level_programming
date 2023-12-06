#include "main.h"

/**
* append_text_to_file - ajoute du texte à la fin d'un fichier
* @filename: nom du fichier
* @text_content: chaîne de caractères qui termine par null à ajouter
* à la fin du fichier
* Return: 1 en cas de succès, -1 en cas d'échec
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	int count = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

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
			return (-1);
	}
	return (1);
}
