#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, avg;

  printf("Input 3 integers\n");
  scanf("%f%f%f", &a, &b, &c);

  avg = (a+b+c)/3;

    printf ("avg of the numbers is %lf" , avg);

    return 0;
}