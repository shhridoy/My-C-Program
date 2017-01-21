#include<stdio.h>
int main()
{
    int a, b, first = 0, second = 1, range;
    printf("Enter the range of the fibonacci series: ");
    scanf("%d", &range);
    printf("\nThe first %d th fibonacci number are: \n", range);

    for(b=0; b<range; b++){
        if(b <= 1){
            a = b;
        }
        else{
            a = first + second;
            first = second;
            second = a;
        }
        printf(" %d\n", a);
    }
    return 0;
}
