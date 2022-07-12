#include "main.h"
#include <stdio.h>
/**
 *  * rev_string - prints reversed string, followed by a new line
 *   * @s: pointer to the string to print
 *    * Return: void
     */

void rev_string(char *s)
{

	{
		int i = 0, length;
		length = _strlen(s) - 1;
		while (length > i)
		{
			swap_char(s + length, s + i);
			i++;
			length--;
		}
	}

	/**
	 *  *_strlen - returns the length of a string
	 *   * @s: string
	 *    *Return: returns lenght;
	      */
	int _strlen(char *s)
	{
		int count, inc;
		inc = 0;
		for (count = 0; s[count] != '\0'; count++)
			inc++;

		return (inc);
	}

	/**
	 * *swap_char - swap two characters
	 * *@a: first character
	 * *@b: second character
	 * *Return: nothing
	  */

	void swap_char(char *a, char *b)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
