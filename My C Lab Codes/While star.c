 #include<stdio.h>
int main ()
{
    int j=4,k=5,i;
    do{
        i=1;
        do{
            printf("*");
            i++;
        }while(i<=k);
        printf("\n");
        k--;
    }while(j --);
    return 0;
}
