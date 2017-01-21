#include<stdio.h>
void back_print(void)
{
    char ch;
    if((ch=getchar())!='\n')
        back_print();
    putchar(ch);
}
int main(void)
{
    printf("\n Type a line f text: ");
    back_print();
    return 0;
}
