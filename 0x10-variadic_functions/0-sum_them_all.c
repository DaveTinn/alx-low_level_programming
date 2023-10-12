#include <stdarg.h>
/**
 * sum_them_all - sums all its parameter
 * @n: number of parameter
 *
 * Return: 0 Always
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int sum = 0;
	unsigned int d;

	if (n == 0)
		return (0);

	va_start(ad, n);
	for (d = 0; d < n; d++)
		sum = sum + va_arg(ad, int);
	va_end(ad);
	return (sum);
}
