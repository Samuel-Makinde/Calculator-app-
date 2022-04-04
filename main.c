#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Description: using switch statement to build a simple calculator
   Time: 12:37
   Date: 4/4/2022
   Author: Makinde Samuel
*/


int main()
{
    int num1, num2, result;
    char sign;
    printf("Enter calculation using any of this operator (+, -, , /):\n\n");
    scanf("%d %c %d", &num1, &sign, &num2);
    switch(sign)
    {
    case '+':
        result=num1+num2;
        printf("%d", result);
        break;
    case '-':
        result=num1-num2;
        printf("%d", result);
        break;
    case '*':
        result=num1*num2;
        printf("%d", result);
        break;
    case '/':
        result=num1/num2;
        printf("%d", result);
        break;
    default:
        printf("operator not correct");
    }
    printf("\nThanks!");


    return 0;
}

