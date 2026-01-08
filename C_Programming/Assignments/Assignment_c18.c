/*

Assignment18 | More on Star Patterns Problems

1. WAP to print the following patterns:
*
**
***
****
*****


*/

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
