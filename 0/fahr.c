#include <stdio.h>

int main(void) {
  double fahr, celsius;
  int lowerLimit, upperLimit, step;

  lowerLimit = 0;
  upperLimit = 243;
  step = 10;

  fahr = lowerLimit;

  while (fahr <= upperLimit) {
    celsius = (5.0 / 9) * (fahr - 32);
    fahr += step;
    printf("F° %4.2f | C° %4.2f \n", fahr, celsius);
  }

  return 0;
}
