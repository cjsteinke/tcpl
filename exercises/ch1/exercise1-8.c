#include <stdio.h>

/* count blanks, tabs, and newlines. */

int main()
{

  int blanks = 0;
  int tabs = 0;
  int newlines = 0;
  int others = 0;
  int c;


  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks;
    } else if ( c == '\t') {
      ++tabs;
    } else if ( c == '\n') {
      ++newlines;
    } else {
      ++others;
    }
  }
  printf("Number of blanks %d\n", blanks);
  printf("Number of tabs %d\n", tabs);
  printf("Number of newliness %d\n", newlines);
}
