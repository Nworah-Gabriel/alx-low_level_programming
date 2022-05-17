#include "variadic_fuctions.h"

/**
  * sum_them_all - A function that returns the sum of digits
  * @n: input for maximum number of the function parameters
  * @...: elipses for the vardiac function
  *Return: always 0
  */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list mylist;
	int sum = 0;
	Unsigned int i;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mylist, int);
	}
	va_end(mylist);
	return (sum);
}
