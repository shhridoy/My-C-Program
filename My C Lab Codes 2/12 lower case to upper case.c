#include <stdio.h>;
//#include <ctype.h>;
int main()
{
      int lower, upper;

      printf("Enter the lowercase character: ");
      lower = getchar();
      upper = toupper(lower);
      printf("The upper case is: ");
      putchar(upper);
      printf("\n");
      return 0;
}
/*#include <stdio.h>
int main()
{
      char lower, upper;

      printf("Please input a lowercase character: ");
      scanf("%c", &lower);

      if(lower >= 'a' && lower <= 'z'){
            upper = ('A' + lower - 'a');
      }
      else{
            upper = lower;
      }

      printf("\nThe uppercase equivalent is: %c\n", upper);
      return 0;
}*/

