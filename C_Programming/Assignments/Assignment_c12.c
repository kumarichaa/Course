/*

Assignment12 | While loop

WAP to print "MySirG" N times on the screen
WAP to print the first N natural numbers.
WAP to print the first N natural numbers in reverse order.
WAP to print the first N odd natural numbers.
WAP to print the first N odd natural numbers in reverse order.
WAP to print the first N even natural numbers.
WAP to print the first N even natural numbers in reverse order.
WAP to print  squares of the first N natural numbers.
WAP to print cubes of the first N natural numbers.
WAP to print the table of N.

*/

#include <stdio.h>

// WAP to print "MySirG" N times on the screen
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
