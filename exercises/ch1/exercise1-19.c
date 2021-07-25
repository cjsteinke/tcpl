/**
 **/

#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

int mygetline(char line[], int maxline);
void reverse(char line[], char enil[], int len);

/* print all input lines in reverse. */
int main()
{

  char line[MAXLINE];
  char enil[MAXLINE];

  int len = 0;

  while ((len = mygetline(line, MAXLINE)) > 0) {
    reverse(line, enil, len);
    printf("%s\n", enil);
  }
}

/* mygetline: read a line and return it's length */
int mygetline(char myline[], int lim)
{

  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    myline[i] = c;
  if (c == '\n') {
    myline[i] = c;
    ++i;
  }

  myline[i] = c  = '\0';
  return i;
  
}

/* reverse: reverse a line */
void reverse(char s[], char r[], int len)
{
  int i, j, k;

  /* Zero out the reverse array */
  for (k = 0; k <= len; k++)
      r[k] = 0; 

  i = len;
  
  /* Walk down the length of the string to the end of line char */
  while (s[i] != '\0')
    ++i;

  /* back up one character to the new line character. */
  --i;
  
  if (s[i] == '\n')
    --i;

  /* Get the size of the string s */
  int s_size = i;
  
  for (j = 0; j <= s_size; j++) {
    r[j] = s[i]; /* assign the characters in reverse to the r string */
    --i; /* decrement s index */

  }
}

		      
