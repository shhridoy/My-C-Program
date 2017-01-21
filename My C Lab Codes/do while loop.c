#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;
    do{
        if(n%2==0){
            printf("%d\n",n);
        }n = n++;
    }while (n <= 100);
    return 0;
}
