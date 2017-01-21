#include<stdio.h>
int main()
{
    char ch;

    for(ch='A'; ch<='Z'; ch++){
        printf("ASCII value of %c is %d.\n\n", ch, ch);
    }
    ch = 'a';

    while(ch <= 'z'){
        printf("\nASCII value of %c is %d.\n", ch, ch);
        ch++;
    }

    getch();
    return 0;
}
