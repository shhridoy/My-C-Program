#include<stdio.h>
int main()
{
    int num, reverse_Integer = 0, original_Integer, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    original_Integer = num;

    while( num!=0 ){
        remainder = num % 10;
        reverse_Integer = (reverse_Integer * 10) + remainder;
        num = num / 10;
    }
    if(original_Integer == reverse_Integer)
        printf("\n%d is a pilandrome.\n", original_Integer);
    else
        printf("\n%d is not a pilandrome.\n", original_Integer);

    return 0;
}
