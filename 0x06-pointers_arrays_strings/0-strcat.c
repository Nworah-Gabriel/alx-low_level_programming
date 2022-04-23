#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function that concatinates strings
 * @dest: param pointer to a char
 * @src: pointer to a char
 * Return: Always (0)
 */

char *_strcat(char *dest, char *src)
{
	char *char1;
	char *char2;
	char *ptr;

	char1 = "hello";
	char2 = "world";
	ptr = _strcat(char2, char1);

	_putchar(*char1);
	_putchar(*char2);
	_putchar(*ptr);

	return (0);
}
