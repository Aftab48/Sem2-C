#include <stdio.h>

int main() {

  float principal, rate, time, simpleInterest;
  
  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  printf("Enter the annual interest rate (as a decimal, e.g., 0.05 for 5%): ");
  scanf("%f", &rate);

  printf("Enter the time period in years: ");
  scanf("%f", &time);

  simpleInterest = (principal * rate * time);

  printf("\nSimple Interest = %.2f\n", simpleInterest);

  return 0;
}
