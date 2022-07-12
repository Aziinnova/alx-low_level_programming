#include "main.h"
#include <stdio.h>
/**
 *  * _strlen - find the length of a string
 *   * @s: pointer to the string to check
 *    * Return: length of the string passed to it
     */


int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
