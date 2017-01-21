#include<stdio.h>
void main()
{
    int month, days;
    printf("\n Enter number of days: ");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("\n\a Number of months = %d and days = %d.\n",month,days);
}
