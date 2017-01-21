#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n--){
        for(i=n; i>=0; i--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
