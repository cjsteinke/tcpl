#include <stdio.h>

#define TABSTOP 8
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void findspaces(char line[]);


/*
 * A program 'entab' that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.

 */

int main() 
{

	int i, c, sc = 0, j, k; 
	
	for (i = 1; (c = getchar()) != EOF; i++) {
		if ( c == ' ') {
		  ++sc;
		  if (sc >= TABSTOP) {
		    printf("\t");
		  } else {
		    printf(" ");
		    sc = 0;
		  }
		} else {
		  putchar(c);
		  sc = 0; 
		}
	}
	
}





