/*
 *
 */
#include <stdio.h>

#define TABSTOP 4

/* A program detab that replaces tabs in the 
 * input with the proper number
 * of blanks to space to the next tab stop.
 */
int main()
{

  int c, i;
  
  while ((c = getchar()) != EOF)
    if (c == '\t') {
      for (i = 1; i <= TABSTOP; i++) {
	printf(" ");
      }
    } else {
      printf("%c",c);
    }
}
	    
