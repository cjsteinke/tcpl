/* 
 * TCPL Exercise 1.23
 * Remove comments from a C program
 */
#include <stdio.h>
#include <stdlib.h>

void rmcomments(int);
void print_quote(int);

int begin_comment = 0;
int end_comment = 0;
int inside_comment = 0;
/*
 * A program to remove all comments from a C program.
 * Don't forget to handle quoted strings and character
 * constants properly. C comments don't nest.
 */
int main()
{
  char c;

  while ((c = getchar()) != EOF) {
    rmcomments(c);
  }
  printf("We are all done!\n");
}

/* Function Where we remove comments */
void rmcomments(int c)
{
  char next_c;
  int have_quote = 0;
  
  if (c == '/' && (next_c = getchar()) == '*') {
    inside_comment = 1;
  } else if ( c == '*' && (next_c = getchar()) == '/') {
    end_comment = 1;
    inside_comment = 0;
  } else if ((c == '\'' && ((next_c = getchar()) == '*' || (next_c = getchar()) == '/')) && inside_comment != 1) {
    print_quote(c);
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
  } else if (inside_comment != 1 ) {
    putchar(c);
    
  }
}

void print_quote(int c)
{

  char next_c;

  putchar(c);
  while ((next_c = getchar()) != c) {
    putchar(next_c);
    if (next_c == '\\')
      putchar(getchar());
  }
  putchar(next_c);

}
  
  
	
	
      
