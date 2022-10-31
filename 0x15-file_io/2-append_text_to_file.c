#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int gd;
	int alx;
	int rwr;

	if (!filename)
		return (-1);

	gd = open(filename, O_WRONLY | O_APPEND);

	if (gd == -1)
		return (-1);

	if (text_content)
	{
		for (alx = 0; text_content[alx]; alx++)

		rwr = write(gd, text_content, gd);

		if (rwr == -1)
			return (-1);
	}

	close(gd);

	return (1);
}
