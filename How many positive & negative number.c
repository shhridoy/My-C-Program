#include<stdio.h>
int main()
{
int n, ng=0, p=0, j;
printf("Enter how many number u will insert\n");
scanf("%d", &n);
while(n>0){
printf("Enter An Integer:\n");
scanf("%d", & j);
if(j>0){
p=p+1;
}
else {
ng=ng+1;
}
n--;
}
printf("There was %d Positive Number and %d Negative Number", p, ng);
return 0;
}
