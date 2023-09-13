#include "main.h"
/**
 * times_table- Function printing multiplication table.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int d;
	int e;
	int multiply;

	for (d = 0; d < 10; d++)
	{
		for (e = 0; e < 10; e++)
		{
			multiply = d * e;
			if (e == 0)
				printf("%d, ", multiply);
			else
			{
				printf("%2d", multiply);
				if (e != 0)
					printf(", ");
			}

		}
		printtf("\n");
	}

}
