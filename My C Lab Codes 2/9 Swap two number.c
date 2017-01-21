#include <stdio.h>
int main()
{
      double firstNum, secondNum, tempVariable;

      printf("Enter first number: ");
      scanf("%lf", &firstNum);

      printf("Enter second number: ");
      scanf("%lf",&secondNum);

      tempVariable = firstNum;
      firstNum = secondNum;
      secondNum = tempVariable;

      printf("\nAfter swapping, firstNumber = %.2lf\n", firstNum);
      printf("After swapping, secondNumber = %.2lf\n", secondNum);

      return 0;
}

