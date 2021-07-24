/**
 * Exercise 1.17
 * exercise1-17.c
 *
 * Write a program to print all input lines that are longer than 80 characters. 
 *
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int mygetline(char line[], int maxline);
void reverse(char from[], char to[], int len);

/* print all input lines that are longer than 80 characters. */

int main()
{
  char line[MAXLINE];
  char enil[MAXLINE];
  int len = 0; 

  while ((len = mygetline(line, MAXLINE)) > 0) {
    reverse(line, enil, len);
  }
}

/* mygetline: read a line intos, return length. */
int mygetline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) !=EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = c = '\0'; 
	return i;
}

/* reverse(): reverse 'from' */
void reverse(char from[], char to[], int len)
{
  int i, k;
  char temp;

  for (k = 0; k <= len; k++)
    to[k] = 0;

  i = len;
  
  while ( i >= 0) {
    if (from[i] != '\0' || from[i] != '\n') {
      to[len - i] = from[i];
    }
    printf("%c", to[len - i]);
    --i;
    printf("%s", to);
  }
}


