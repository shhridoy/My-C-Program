#include<stdio.h>
void main()
{
    int n,m,sum;
    sum=0;
    printf("\n Enter the number: ");
    scanf("%d",&m);
    for(n=0;n<=m;n++)
        sum+=n;
    printf("\n Sum of all number from 1 to %d is %d.\n\n",m,sum);
}

