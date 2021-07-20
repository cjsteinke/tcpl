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
void copy(char to[], char from[]);

/* print all input lines that are longer than 80 characters. */

int main()
{

	int len;              /* current line length */
	int max;              /* maximum length seen so far */
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0; 

	while ((len = mygetline(line, MAXLINE)) > 0) {
		if (len > 80) {
		    copy(longest, line);
		    printf("%d: ", len);
		    printf("%s", longest);
		}
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


