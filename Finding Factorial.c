#include<stdio.h>
long int find_factorial(long int n)
{
    if(n<=1)
        return 1;
    else
        return(n*find_factorial(n-1));
}
int main(void)
{
    long int x;
    x=find_factorial(5);
    printf("\n Factorial is: %1d\n",x);
    return 0;
}
