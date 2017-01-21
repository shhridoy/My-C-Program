#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;
   printf("Enter the angle: ");
   scanf("%lf", &x);

   val = PI / 180;
   ret = sin(x*val);

   printf("\nThe value of sin(%0.2lf) is %0.3lf.\n", x, ret);

   return(0);
}
