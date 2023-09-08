#include "main.h"
#include <stdlib.h>
/**
 * create_file - a function that creates a file.
 * @filename: input value
 * @text_content: input value
 *
 * return 0 if the file was created successfully,
 * -1 if there was an error.
 */
int create_file(const char *filename, char *text_content)
{
	int fb, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fb = open(filename, O_CREAT || O_RDWR || O_TRUNC, 0600);
	w = write(fb, text_content, len);

	if (fb == -1 || w == -1)
		return (-1);

	close(fb);
	return (0);
}
