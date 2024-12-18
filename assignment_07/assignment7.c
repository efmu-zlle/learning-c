#include <stdio.h>
#include <math.h>


int main(int argc, int *argv[]) {
  float a, b, c;
  
 printf("Enter the value of variable 'A': ");
  if (scanf("%f", &a) != 1)
      return 1;

  printf("Enter the value of variable 'B': ");
  if (scanf("%f", &b) != 1)
      return 1;

  printf("Enter the value of variable 'C': ");
  if (scanf("%f", &c) != 1)
      return 1;

  float discriminant = (b*b) - (4*a*c);

  if (discriminant < 0) {
      printf("The equation has complex solutions.\n");
      return 1;
  }

  float sqrt_discriminant = sqrt(discriminant);
  float solution1 = (-b + sqrt_discriminant) / (2*a);
  float solution2 = (-b - sqrt_discriminant) / (2*a);

  // Define an epsilon for floating-point comparison
  const float epsilon = 0.00001;

  if (fabs((a*(solution1*solution1)) + (b*solution1) + c) < epsilon) 
      printf("The solution using the '+' operator is: %f\n", solution1);
  else
      printf("The solution using the '+' operator is: %f, but you might want to double-check that...\n", solution1);

  if (fabs((a*(solution2*solution2)) + (b*solution2) + c) < epsilon) 
      printf("The solution using the '-' operator is: %f\n", solution2);
  else
      printf("The solution using the '-' operator is: %f, but you might want to double-check that...\n", solution2);

  return 0; 
}


// const int *p; means the value pointed to cannot be changed
// int *const p; means the pointer itself cannot be changed