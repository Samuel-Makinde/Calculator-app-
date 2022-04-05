#include <stdio.h>
#include <stdlib.h>
/* Description: to take input from user without specifying how many times but the program will
   stop when the user enter a negative number.
   Time: 7:10am
   Date: 4/5/2022
   Author: Makinde Samuel
*/

int main()
{
    int a, i, sum=0;
    while(i)
    {
        printf("Enter a number: ");
        scanf("%d", &a);

        //zero is greater than any minus sign//
             if(a<0)
             {
                 break;
             }
        i++;
        sum = sum+a;
    }
    printf("The total sum is %d", sum);
    return 0;
}
