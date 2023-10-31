#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: pointer to a file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if Success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int app_text;
	int len, file_text;

	if (!filename)
	{
		return (-1);
	}
	app_text = open(filename, O_WRONLY | O_APPEND);
	if (app_text == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		file_text = write(app_text, text_content, len);
		if (file_text == -1)
		{
			return (-1);
		}
	}
	close(app_text);
	return (1);
}
