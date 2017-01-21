#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter a letter: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("\n  Upper case  \n",ch);
    else
        printf("\n  Lower case  \n",ch);
}
