#include<stdio.h>
int main()
{
    int result;

    printf("Enter your mark: ");
    scanf("%d",&result);
    printf("\n");

    if(result<=100 && result>=80){
        printf("You got A+.\n");
    }
    else if(result<80 && result>=70){
        printf("You got A.\n");
    }
    else if(result<70 && result>=60){
        printf("You got A-.\n");
    }
    else if(result<60 && result>=50){
        printf("You got B.\n");
    }
    else if(result<50 && result>=40){
        printf("You got C.\n");
    }
    else if(result<40 && result>=33){
        printf("You got D.\n");
    }
    else if(result<33){
        printf("You are FAIL.\n");
    }
    else{
        printf("Please enter marks correctly.\n");
    }
    return 0;
}
