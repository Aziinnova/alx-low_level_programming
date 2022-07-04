#include <stdio.h>
/**
 *  * main - Prints the alphabet except the letters q and e.
 *  (*
 *   * Return: 0 on success
    */
int main(void)
{
		char c = 'a';

			if (c <= 'z')
					{
								while (c != 'q' && c != 'e')
											{
															putchar(c);
																	}
										c++;
											}
				putchar('\n');
					return (0);
}

