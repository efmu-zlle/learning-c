#include <stdio.h>
#include <stdlib.h>

#define PIE 3.14159
#define AREA_OF_CIRCLE(r) (PIE * (r) * (r))

int main(int argc, char* argv[]) {
  float* radius = malloc(sizeof(float));

  if (radius == NULL) {
    return 1;
  }

  printf("Enter the radius of your circle: ");
  scanf("%f", radius);

  printf("The area of your circle is %f\n", AREA_OF_CIRCLE(*radius));
  free(radius);

  return 0;
}

