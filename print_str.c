#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string pointer
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
