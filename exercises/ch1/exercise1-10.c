#include <stdio.h>

/* Replace each tab with a '\t', each backspace with a '\b' and each newline
 * with a '\n.
 */

int main()
{

	int c;

	while ((c=getchar()) != EOF) {

		if (c == '\b') {
			printf("\\b");
		} else if (c == '\t') {
			printf("\\t");
		} else if (c == '\\') {
			printf("\\\\");
		} else 
			putchar(c);
	}
}

