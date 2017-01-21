#include<stdio.h>
void main()
{
    float a,b,c;
    printf("\n Enter three values(separated by space): ");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n\a The largest value is: ");
    if(a>b){
        if(a>c)
            printf("%.2f",a);
        else
            printf("%.2f",c);
    }
    else{
        if(c>b)
            printf("%.2f",c);
        else
            printf("%.2f",b);
    }
}
