/*
 * A program to check a c program for 
 * rudimentary syntax errors like
 * unblanaced parentheses, brackets 
 * and braces. 
 */
#include <stdio.h>
#include <stdlib.h>

int check_chars(int c);

int main()
{
    int c; 

    while ((c = getchar()) != EOF) {
        check_chars(c);
    }

    return 0;
}

int check_chars(int c) 
{
    int left_paren = 0; 
    int right_paren = 0; 
    int left_brack = 0;
    int right_brack = 0; 
    int left_brace = 0;
    int right_brace = 0; 

    if (c == '{') {
        left_paren = 1;
    } else if (c == "}") {
        right_paren = 1;
    } else if (c == "[") {
        left_brack = 1;
    } else if (c == "]") {
        right_brack = 1;
    } else if (c == "{") {
        left_brace = 1;
    } else if (c == "}") {
        right_brace = 1;
    } 

    if ((left_paren == 1 && right_paren == 0) || (left_paren == 0 && right_paren == 1)) {
        printf("Syntax error: missing parentheses\n");
    }

    if ((left_brack == 1 && right_brack == 0) || (left_brack == 0 && right_brack == 1)) {
        printf("Syntax error: missing bracket\n");
    }

    if ((left_brace == 1 && right_brace == 0) || (left_brace == 0 && right_brace == 1)) {
        printf("Syntax error: missing brace\n");
    }
}
