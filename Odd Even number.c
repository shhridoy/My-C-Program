#include<stdio.h>
void main()
{
    int n;
    printf("\n Please enter a integer number: ");
    scanf("%d",&n);
    if((n%2)!=0)
        printf("\n\a You entered an odd number.\n");
    else
        printf("\n\a You entered an even number.\n");
}
