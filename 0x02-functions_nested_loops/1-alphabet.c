#include "main.h"
/**
 *  * print_alphabet - prints alphabet

*
void printalfa(void) {
	    char c;
	        for (c = 'a'; c <= 'z'; ++c)
			        printf("%c ", c);
		    re*/

int main()
{
	    for(int x = 'a'; x <= 'z'; x++)
		        {
				        x = tolower(x);
					        putchar(x);
						    }
	        return 0;
}
