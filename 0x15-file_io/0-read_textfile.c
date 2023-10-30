#include "main.h"
/**
 * read_textfile - reads text file and prints to POSIX standard output
 * @filename: pointer to a file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_ptr;
	char *cache;
	ssize_t num_of_letters;
	ssize_t amt_of_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	file_ptr = open(filename, O_RDONLY);
	if (file_ptr == -1)
	{
		return (0);
	}
	cache = malloc(sizeof(char) * letters);
	if (cache == NULL)
	{
		close(file_ptr);
		return (0);
	}
	num_of_letters = read(file_ptr, cache, letters);
	amt_of_bytes = write(STDOUT_FILENO, cache, num_of_letters);
	close(file_ptr);
	free(cache);
	return (amt_of_bytes);
}
