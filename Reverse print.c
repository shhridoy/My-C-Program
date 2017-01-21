#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("\nEnter a sentence: ");
    gets(name);
    strrev(name);
    printf("\n\nReverse: %s\n",name);

    getch();
    return 0;
}
