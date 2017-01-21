#include<stdio.h>
void main()
{
    long num, digit, temp, sum = 0;
    printf("Enter the number: ");
    scanf("%ld",&num);
    temp = num;

    while(num > 0){
        digit = num % 10;
        sum = sum + digit;
        num = num/10;
    }
    printf("\nSum of the digit %ld is %ld.\n", temp, sum);

}
