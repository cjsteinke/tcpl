/*************************************************************************************
 *
 * The C Programming Language Solved Exercisess
 * Chris Steinke
 *
 * Chapter 1, Exercises 1.14
 *
 ************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAXDIGITS 10
#define MAXALPHAS 26

/* Print a histogram of the different frequencies of different characterss input */
int main()
{

    int c, j, i, k,nothers, nwhites;
    int ndigit[MAXDIGITS];

    /* Puncatiion includes
     * "," , "." , ";", ":", """
     */

    int npunc;
    int alphacaps[MAXALPHAS];
    int alphalowers[MAXALPHAS];

    nwhites = npunc = nothers = 0;

    /* Initialise digit count array */
    for (i = 0; i <  MAXDIGITS; ++i) {
	ndigit[i] = 0;
    }

    /* Initiallise Alphabetical character counts */
    for (i = 0; i < MAXALPHAS; ++i) {
	alphacaps[i] = 0;
	alphalowers[i] = 0;
    }

    while ((c = getchar()) != EOF) {
	if ( c >= '0' && c <= '9') {
		++ndigit[c-'0'];
	} else if (c >= 'a' && c <= 'z') {
		++alphalowers[c-'a'];
	} else if (c >= 'A' && c <= 'Z') {
		++alphacaps[c-'A'];
	} else if (c == ' ' || c == '\n' || c == '\t') {
		++nwhites;
	} else if (c == ',' || c == '.' || c == ';' || c == ':' || c == '"') {
		++npunc;
	} else
		++nothers;
    }

    /*
     * Print the digits 0 - 9
     * then print the frequency
     * of each digit
     */
    for (i = 0; i < MAXDIGITS; ++i) {
	printf("%d | ",i);
	for (j = 0; j < ndigit[i]; ++j) {
		printf("*");
	}
	printf("\n");
    }

    /*
     * Print a histogram of the frequency of each
     * lower case letter a - z
     *
     */
    for (i = 'a'; i <= 'z'; ++i) {
	    printf("%c | ", i);
	    for (j = 0; j < alphalowers[i  - 'a']; ++j) {
		    printf("*");
	    }
	    printf("\n");
    }

    /*
     * Print a histogram of the frequency of each
     * upper case letter A - Z
     *
     */
    for (i = 'A'; i <= 'Z'; ++i) {
	printf("%c | ", i);
	for (j = 0; j < alphacaps[i - 'A']; ++j) {
		printf("*");
	}
	printf("\n");
    }

    /*
     * Print a historgram of the frequency of
     * White Space characters, punctuation and
     * everything else.
     */
    printf("WS | ");
    for (i = 0; i < nwhites; ++i) {
	    printf("*");
    }
    printf("\n");
    printf("PNCT | ");
    for (i = 0; i < npunc; ++i) {
	    printf("*");
    }
    printf("\n");
    printf("O | ");
    for (k = 0; k < nothers; ++k) {
	    printf("*");
    }
    printf("\n");

    return(0);

}
