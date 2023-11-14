#include "main.h"

/**
 * print_hex_extra - prints an hexdecimal number.
 * @num: value to be converted
 * Return: counter.
 */

int print_hex_extra(unsigned long int num)
{
	long int i;
	long int *array;
	int counter = 0;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
		if (array == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
