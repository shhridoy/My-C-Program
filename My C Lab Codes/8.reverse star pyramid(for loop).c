#include<stdio.h>
int main()
{
 int num,r=1,c,sp;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(; num>=1; num--,r++)
 {
  for(sp=r; sp>1; sp--)
     printf("_");
  for(c=1; c<=num; c++)
    printf("*");
  printf("\n");
 }
 return 0;
}
