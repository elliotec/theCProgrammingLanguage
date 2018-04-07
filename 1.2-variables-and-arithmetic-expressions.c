#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating point version */
main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = -30; // lower limit of temperature table
  upper = 200; // upper limit
  step = 10; // step size

  fahr = lower;

  printf("Fahrenheit to Celsius:\n");

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

