#include <stdio.h>
#include <stdlib.h>
/* Description: using if-else statements to print a simple calculator
   Time: 12:14pm
   Author: Makinde Samuel
   Date: 4/4/2022
*/

int main()
{
    int num1, num2, result;
    char sign;
    printf("Enter calculation with any of this operator (+, *, -, /):\n\n");
    scanf("%d %c %d", &num1, &sign, &num2);
    if(sign=='+')
    {
        result=num1+num2;
        printf("%d", result);
    }
    else if(sign=='-')
    {
        result=num1-num2;
        printf("%d", result);
    }
    else if(sign=='*')
    {
        result=num1*num2;
        printf("%d", result);
    }
    else if(sign=='/')
    {
        result=num1/num2;
        printf("%d", result);
    }
    else
        printf("wrong operator!");

    return 0;
}
