#include<stdio.h>
void main()
{
    int i, j, t, num[3];
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(num[i] < num[j])
                {
                    t = num[i];
                    num[i] = num[j];
                    num[j] = t;
    }
    }
    }
    printf("\nForward : ");
    for(i=0; i<3; i++)
    printf("\n %d ", num[i]);
    printf("\nReverse : ");
    for(i=2; i>=0; i--)
    printf("\n %d ", num[i]);
    getch();
}
