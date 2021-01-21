#include <stdio.h>


/* copy input to output, replacing each string 
 * of one or more blanks by a single blank 
 */



#define NONBLANK 'x'

int main()
{

  int c, prevchar; 

  prevchar = NONBLANK;

  while ((c = getchar()) != EOF) {
    if (c != ' ') 
      putchar(c);
    if (c == ' ') 
      if (prevchar != ' ') 
	putchar(c);
    prevchar = c;
  }
}

    





      
      
