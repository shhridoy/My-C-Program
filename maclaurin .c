#include <stdio.h>
float exponential(int n, float x)
{
    float sum = 1.0;
    int i;
    for (i=n-1; i > 0; --i )
        sum = 1 + x * sum / i;

    return sum;
}
int main()
{
    int n;
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("\nEnter the value of term n: ");
    scanf("%d", &n);
    printf("\ne^%.2f = %f\n", x, exponential(n, x));
    return 0;
}
