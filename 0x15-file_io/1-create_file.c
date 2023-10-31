#include "main.h"
/**
 * create_file - creats a file
 * @filename: pointer to a file
 * @text_content: pointer to a NULL terminated string to write to the file
 *
 * Return: 1 on Success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int itr, file_str;

	if (filename != NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (itr = 0; text_content[itr]; itr++)
	{
		file_str = write(new_file, text_content, itr);
	}
	if (file_str == -1)
	{
		return (-1);
	}
	close(new_file);
	return (1);
}
