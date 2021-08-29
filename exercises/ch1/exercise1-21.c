#include <stdio.h>

#define TABSTOP 8
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void findspaces(char line[]);

/* Replaces strings of blanks by the minimum number of tabls to space to the 
 * next tab stop
 */

int main() 
{

	int i, c, sc = 0, j, k; 
	int need_tabs;

	for (i = 1; (c = getchar()) != EOF; i++) {
		if ( c == ' ') {
			++sc;
		} else if (c == '\t') {
			printf("\t");
			if (sc > 0 && sc < TABSTOP) {
				for (j = 1; j <= sc; j++) {
					printf(" ");
				}
				sc = 0;
			} else if (sc == TABSTOP) {
				printf("\t");
				sc = 0;
			}
		} else {
			/* We have a regular character */
			if (sc > 0 && sc < TABSTOP) {
				for (k = 1; k <= sc; k++) {
					printf(" ");
				}
				sc = 0;
			} else if  (sc == TABSTOP) {
				printf("\t");
				sc = 0;
			}
			putchar(c);
			sc = 0;
		}
	}
}





