#include <stdio.h>

/*
 * Print Fahrenheit-Celisuss table
 * Floating point edition
 * 0-220
 */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temp range */
  upper = 220; /* upper limit of temp rante */
  step = 5;   /* step size */

  fahr = lower;
  printf("Fahrenheit \t Celsius\n");
  printf("---------------------------\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

  
