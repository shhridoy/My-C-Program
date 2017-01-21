#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nThe given number is even.\n");
    }
    else
    {
        printf("\nThe given number is odd.\n");
    }
    return 0;
}
