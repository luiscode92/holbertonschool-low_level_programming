#include "holberton.h"
/**
* append_text_to_file - Append text to the end of a file
* @filename: name of file
* @text_content: string to add to end of file
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, i, w;

	if (filename == NULL)
		return (-1);
	fb = open(filename, O_WRONLY | O_APPEND);
	if (fb == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(fb, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fb);
	return (1);
}

