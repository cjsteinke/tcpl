#include <stdio.h>

/* a program to ``fold'' long input lines into two or more shorter lines after
 * the last non-blank character that occurs before the n-th column of input.
 */

#define MAXLINE 1000
#define LINELIMIT 80

int mygetline(char line[], int maxline);
void fold(char line[])

int main()
{
	char line[MAXLINE];


	int len = 0;

	while ((len = mygetline(line, MAXLINE)) < LINELIMIT) {
	       fold(line);
	}
}

/* mygetline: read a line and return it's length */
int mygetline(char mylie[], int lim)
{

	int c, i;

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		myline[i] = c;
	if (c == '\n') {
		myline[i] = c;
		++i;
	}

	myline[i] = c = '\0';
	return i;
}

/* fold: fold a line */
void fold(char line[])




