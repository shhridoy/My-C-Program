/*Equilateral triangle means all three side and angles are equal(i.e. 60 degree).
  Isosceles triangle means any two side and angles are equal.
  Scalene triangle means , any sides and any angles are not equal.*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
    {
        printf("Equilateral triangle");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
    return 0;
}
