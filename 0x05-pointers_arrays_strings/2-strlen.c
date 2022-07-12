#include "main.h"
#include <stdio.h>
/**
 *  * _strlen - find the length of a string
 *   * @s: pointer to the string to check
 *    * Return: length of the string passed to it
     */


int _strlen(char *s)
{
	    char *str;
	        int len;

		    str = "My first strlen!";
		        len = _strlen(str);
			    printf("%d\n", len);
			        return (0);
}
