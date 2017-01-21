//Example of pilandrome is 12321, 56465, 98089 etc.

#include <stdio.h>
int main()
{
    int n, reversed_Integer = 0, remainder, original_Integer;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original_Integer = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversed_Integer = reversed_Integer*10 + remainder;
        n = n / 10;
    }
    if(original_Integer == reversed_Integer)
        printf("\n\n%d is a palindrome.\n", original_Integer);
    else
        printf("\n\n%d is not a palindrome.\n", original_Integer);

    return 0;
}
