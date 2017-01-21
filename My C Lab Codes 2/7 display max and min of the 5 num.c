#include<stdio.h>
main()
{
    int a[10], i, n = 5, max, min;
    printf("Enter five number separated by space: ");
    for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
    min = a[0];
    max = a[0];
    for(i=0; i<n; i++)
        {
            if(a[i] > max)
            max = a[i];

            if(a[i] < min)
            min = a[i];
        }
    printf("\nThe Maximum Number is %d\n", max);
    printf("The Minimum Number is %d\n", min);
    getch();
    return 0;
}
