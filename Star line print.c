#include<stdio.h>
void main()
{
    int i,j,star;
    printf("\n How many star line you want: ");
    scanf("%d",&star);
    for(i=0;i<=star;i++)
    {
        for(j=0;j<i;j++){
            printf(" *");
        }
        printf("\n");
    }
}
