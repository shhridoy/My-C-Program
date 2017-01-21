#include<stdio.h>
void main()
{
    int a,b;
    printf("\n Enter the first integer number: ");
    scanf("%d",&a);
    printf("\n Enter the second integer number: ");
    scanf("%d",&b);
    if(a>=b){
        if(a>b)
        printf("\n\a %d is greater than %d.\n",a,b);
        else
        printf("\n\a %d is equal to %d.\n",a,b);
    }
    else
        printf("\n\a %d is less than %d.\n",a,b);
}
