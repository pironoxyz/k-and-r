#include <stdio.h>

int main(void) {
  double fahr, celsius;
  int lowerLimit, upperLimit, step;

  lowerLimit = 0;
  upperLimit = 300;
  step = 10;

  fahr = lowerLimit;

  while (fahr <= upperLimit) {
    fahr = ((celsius * 9) / 5) + 32;
    celsius += step;
    printf("C° %4.2f | F° %4.2f \n", celsius, fahr);
  }

  return 0;
}
