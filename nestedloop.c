#include <stdio.h>
#include <stdlib.h>

/** Description: to make user determine how many times they want a program to repeat it self
 *  Date: 4/5/2022
 *  Author: Makinde Samuel
 *
 * \return: 0;
 *
 */


int main()
{
    int n, j, a;
    /**< what to repeat. NOTE: you can edit this part base on what you want to do */
    char ch='*';

    printf("Enter how many times you want the character to print:");
    scanf("%d", &n);

    // To space how many line it should print//
    for(j=1; j<=4; j++)
    {
        // To get the number of time the character should be repeated base on your input//
        for(a=1; a<=n; a++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("Thanks!");
    return 0;
}
