#include <stdio.h>
/*
 * The C Programming Language
 * Exercise 1-4 
 *    
 * Write a program to print the corresponding 
 * Celsius tp Fahrenheit table.
 */
int main()
{

  float fahr, celsius = 0;

  int lower = 0;    /* Lower limit of temperature table. */
  int upper = 300;  /* Upper limit of temperature table. */
  int step = 20;    /* Temperature step size */

  celsius = lower;
  printf("Celsius \t Fahrenheit\n");
  printf("---------------------------\n");
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%3.0f \t\t %6.2f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

    
	    
