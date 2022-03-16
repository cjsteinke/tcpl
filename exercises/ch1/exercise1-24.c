/*
 * A program to check a c program for
 * rudimentary syntax errors like
 * unblanaced parentheses, brackets
 * and braces.
 */
#include <stdio.h>
#include <stdlib.h>

void check_chars(int c);
void in_comment(void);
void in_quote(int c);

int brace, bracket, paren;

int main()
{
	int c, next_c;

	extern int brace, bracket, paren;

	while ((c = getchar()) != EOF) {
		if (c == '/' ) {
			if ((next_c = getchar()) == '*') {
				in_comment();
			} else {
				check_chars(c);
			}
		} else if (c == '\'' || c == '"') {
			in_quote(c);
		} else
			check_chars(c);

		if (brace < 0) {
			printf("Unbalanced parentheses\n");
			brace = 0;
		} else if (bracket < 0) {
			printf("Unbalanced parentheses\n");
	                bracket = 0;
		} else if (paren < 0) {
			printf("Unbalanced parentheses\n");
			paren = 0;
		}

		if (brace > 0)
			printf("Unbalanced parentheses\n");
		if (bracket > 0)
			printf("Unbalanced parentheses\n");
		if (paren > 0)
			printf("Unbalanced parentheses\n");
	}
	return 0;
}

void check_chars(int c)
{
	extern int brace, bracket, paren;

	if (c == '{') {
		++brace;
	} else if (c == '}') {
		--brace;
	} else if (c == '[') {
		++bracket;
	} else if (c == ']') {
		--bracket;
	} else if (c == '(') {
		++paren;
	} else if (c == '}') {
		--paren;
	}
}


void in_comment()
{
	int c, next_c;

	/* previous character */
	c = getchar();
	/* current character */
	next_c = getchar();

	/* Search for the end of the comment */
	while (c != '*' || next_c != '/') {
		c = next_c;
		next_c = getchar();
	}
}

void in_quote(int c)
{
	int next_c;

	/* walk to the end of the quote */
	while ((next_c = getchar()) != c)
		/* Ignore escape sequences */
		if (next_c == '\\')
			getchar();
}
