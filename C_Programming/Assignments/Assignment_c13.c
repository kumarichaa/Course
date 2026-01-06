/*

Assignment13 | Use any loop

WAP to calculate sum of first N natural numbers.
WAP to calculate sum of first N odd natural numbers.
WAP to calculate sum of first N even natural numbers.
WAP to calculates sum of squares of first N natural numbers.
WAP to calculates sum of cubes of first N natural numbers.


*/

#include <stdio.h>

// WAP to calculate sum of first N natural numbers.
int main()
{

    int num1;
    printf("Please enter a number\n");
    scanf("%d", &num1);
    if (num1 %= 2)
    {
        printf("Given number is an odd\n");
        return 0;
    }
    else
    {
        printf("Given number is an even\n");
        return 0;
    }
}
