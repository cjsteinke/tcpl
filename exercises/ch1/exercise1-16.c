/*
 * Exercise Chapter 1 - 16
 * Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
 * the length of arbitrary long input lines, and as much as possible of the text.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line and correctly print the
 * length of the arbitrary long input lines, 
 * and as much as possible of the text.
 */

int main()
{

  int len;              /* current line length */
  int max;              /* maximum length seen so far */
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0; 
  while ((len = mygetline(line, MAXLINE)) > 0)
    printf("%d: %s", len, line);
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0) { /* there was a line */
    printf("\n\n");
    printf("The line was:[ %d ] long", max);
    printf("The longest line: %s\n", longest);
  }

  return 0; 

}


/* mygetline: read a line intos, return length. */
int mygetline(char s[], int lim)
{
	int c, i;

	for (i = 0; (c = getchar()) !=EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = c= '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is beig enough */
void copy (char to[], char from[])
{
	int i; 

	i = 0; 
	while ((to[i] = from[i]) != '\0')
		++i;
}


