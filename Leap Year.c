#include<stdio.h>
void main()
{
    int year;
    printf("\n Please enter a year(like 1980): ");
    scanf("%d",&year);
    if(((year%4)==0)&&((year%100)!=0)||((year%400)==0))
        printf("\n\a %d is a LEAP YEAR.\n",year);
    else
        printf("\n %d is not a LEAP YEAR.\n",year);

}
