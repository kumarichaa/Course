/*

Assignment7 | Decision Control Statements

WAP to check whether a given number is positive or negative.
WAP to check whether a given number is divisible of 5  or not.
WAP to check whether a given number is an even or odd.
WAP to check whether a given number is an even or an odd number without using % operator.
WAP to check whether a given number is an even or an odd number without using bitwise operator.



*/

#include <stdio.h>

// WAP to check whether a given number is positive or negative.

// int main()
// {

//     int num1;
//     printf("Enter a number:\n");
//     scanf("%d", &num1);
//     if (num1 > 0)
//     {
//         printf("Given number %d is positive\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is negative\n", num1);
//         return 0;
//     }
// }

// WAP to check whether a given number is divisible of 5  or not.

// int main()
// {

//     int num1;
//     printf("Enter a number:\n");
//     scanf("%d", &num1);
//     if (num1%5)
//     {
//         printf("Given number %d is not divisible by 5\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is divisible by 5\n", num1);
//         return 0;
//     }
// }

// WAP to check whether a given number is an even or odd.

// int main()
// {

//     int num1;
//     printf("Enter a number:\n");
//     scanf("%d", &num1);
//     if (num1%2)
//     {
//         printf("Given number %d is an odd\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is an even\n", num1);
//         return 0;
//     }
// }

// WAP to check whether a given number is an even or an odd number without using % operator.

// int main()
// {

//     int num1;
//     printf("Enter a number:\n");
//     scanf("%d", &num1);
//     if (num1&1)
//     {
//         printf("Given number %d is an odd\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is an even\n", num1);
//         return 0;
//     }
// }

// WAP to check whether a given number is an even or an odd number without using bitwise operator.

int main()
{

    int num1;
    printf("Enter a number:\n");
    scanf("%d", &num1);
    if (((num1/2)*2==num1))
    {
        printf("Given number is an even\n");
        return 0;
    }
    else
    {
        printf("Given number is an odd\n");
        return 0;
       
    }
}
