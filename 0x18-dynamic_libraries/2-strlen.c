#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length.
 */
size_t strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
