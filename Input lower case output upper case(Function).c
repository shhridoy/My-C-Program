#include<stdio.h>
int main(void)
{
    char lower,letter;
    char upper_case(char ch);
    printf("\n Type a lower case letter: ");
    scanf("%c",&lower);
    letter=upper_case(lower);
    printf("\n\nThe upper case of your typing letter is: %c\n\n",letter);
    return 0;
}
char upper_case(char ch)
{
    if(ch>='a'&&ch<='z')
        return('A'+ch-'a');
    else
        return(ch);
}
