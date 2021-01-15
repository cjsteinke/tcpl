#include <stdio.h>


/* VVerify the expressiong getchar() != EOF is 0 or  1 */

int main()
{

	int i; 

	i = getchar() != EOF;
	printf("The value of [i = getchar() != EOF] = %d\n", i);

	return 0 
}

