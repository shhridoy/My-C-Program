#include<stdio.h>
#include<math.h>

int main()
{
    float a, root;

    printf("Enter the number: ");
    scanf("%f",&a);

    root=sqrt(a);

    printf("\nThe square root of the given number is %f.\n",root);

    getch();
    return 0;
}
