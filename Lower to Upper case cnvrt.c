#include<stdio.h>
#include<string.h>
int main()
{
    char sentnc[100];
    gets(sentnc);
    strupr(sentnc);
    printf("\n%s",sentnc);

    getch();
    return 0;
}
