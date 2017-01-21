#include<stdio.h>
void square_num(void)
{
    int i,num;
    printf("\n\nNumber  square\n");
    for(num=1;num<=10;num++)
        printf("%4d %8d\n",num,num*num);
}
void cube_num(void)
{
    int i,num;
    printf("\n\nNumber    Cube\n");
    for(num=1;num<=10;num++)
        printf("%4d %8d\n",num,num*num*num);
}
void main(void)
{
    printf("\n\n Press any key to see square number from 1 to 10.");
    square_num();
    printf("\n\n Press any key to see cubic number from 1 to 10.");
    cube_num();
}
