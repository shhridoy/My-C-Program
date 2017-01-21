#include<stdio.h>
int main()
{
    int grade1, grade2, grade3, grade4, grade5;
    float average;

    printf("\n\n Enter five grade (use SPACE to separate the data): ");
    scanf("%d %d %d %d %d",&grade1,&grade2,&grade3,&grade4,&grade5);

    average=((grade1+grade2+grade3+grade4+grade5)/5.0);

    printf("\n\n\a Average is: %f.\n",average);
    return 0;
}
