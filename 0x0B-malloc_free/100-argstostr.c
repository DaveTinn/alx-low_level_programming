#include "main.h"
/**
 * argstostr - concatenantes all arguments
 * @ac: paramater of integer character
 * @av: pointer to a string
 *
 * Return: NULL, if failure
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int d;
	int str_len;
	int args = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		if (av[d] != NULL)
			str_len = 0;
		while (av[d][str_len] != '\0')
			str_len++;
				len = len + str_len + 1;
	}
	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
		if (av[d] != NULL)
		{
			str_len = 0;
			while (av[d][str_len] != '\0')
			{
				concat[args] = av[d][str_len];
				str_len++;
				args++;
			}
			concat[args] = '\n';
			args++;
		}
	}
	concat[args] = '\0';
	return (concat);
}
