/**
 * Exercise 1.18
 * exercise1-18.c
 *
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 *
 **/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int mygetline(char line[], int maxline);
int cleanline(char string[]);

int main()
{


  int len;
  
  char line[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0) {
      if (cleanline(line) > 0) 
	printf("%s", line);
    }
    
    return 0;

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

/* Clean line of trailing tabs blanks */
int cleanline(char string[])
{

  int i = 0;

  while (string[i] != '\n') 
    ++i;
  
  --i;
  while (i >= 0 && (string[i] == ' ' || string[i] == '\t')) 
    --i;
  
  if (i >= 0) {
    ++i;
    string[i] = '\n';
    ++i;
    string[i] = '\0';
  }

  return i;
} 
