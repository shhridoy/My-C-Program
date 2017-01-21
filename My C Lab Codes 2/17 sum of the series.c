#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = (n * (n + 1)) / 2;
    printf("\nSum of the series: ");

    for(i=1; i<=n; i++){
         if (i!=n)
             printf("%d + ",i);
         else
             printf("%d = %d\n ",i,sum);
         }

    return 0;
}
