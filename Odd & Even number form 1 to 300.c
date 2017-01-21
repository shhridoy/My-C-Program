#include<stdio.h>
void main()
{
    int i;
    printf("\n Even number: \n");
    for(i=1;i<=300;i++)
    {
        if(i%2)
            continue;
        printf("%d ",i);
    }
    printf("\n Odd number: \n");
    i=0;
    while(i<300)
    {
        i++;
        if(!(i%2))
            continue;
        printf("%d ",i);
    }
}
