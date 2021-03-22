#include <stdio.h>

/* Print Fahrenheit-Celsius table 
 *  for fahr = 0,  ..., 300 
 */

int ftoc(int f);

int main()
{

  int fahr, celsius;
  int lower, upper, step;

  lower = 0;     /* lower limit of temperature table */
  upper = 220;   /* upper limit */
  step = 5;     /* step size */

  fahr = lower;
  printf("Fahrenheit \t Celsius\n");
  printf("---------------------------\n");
  while (fahr <= upper) {
	  celsius = ftoc(fahr);
    	  printf("%3d\t\t%6d\n", fahr, celsius);
          fahr = fahr + step;
  }
  return 0;
}

/* Take temperature in Fahrenheit and return the 
 * temperature in Celsius.
 */
int ftoc(int f) 
{
	return 5 * (f - 32) / 9;
}


    	
