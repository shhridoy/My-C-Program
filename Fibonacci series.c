#include<stdio.h>
int main()
{
    int a,b,first=0,second=1,range;
    printf("\n Enter the range of fibonacci series: ");
    scanf("%d",&range);
    printf("\n The first %d th fibonacci number are: \n",range);
    for(b=0;b<range;b++){
        if(b<=1)
            a=b;
        else
        {
            a=first+second;
            first=second;
            second=a;
        }
        printf(" %d\n",a);
    }
    return 0;
}
