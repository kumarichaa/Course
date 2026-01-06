/*
Assignment10 | More on Decision Control Statements

WAP to check whether a given number is positive,negative or zero.
WAP to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character.
WAP to which takes the length of the triangle as an input. Display whether the triangle is valid or not.
WAP which takes the month number as an input and display number of days in that month.

*/

#include <stdio.h>

// WAP to check whether a given number is positive,negative or zero.

// int main()
// {

//     int num1;
//     printf("Please enter a number\n");
//     scanf("%d", &num1);
//     if (num1 > 0)
//     {
//         printf("Given number %d is positive\n", num1);
//         return 0;
//     }else if (num1 < 0)
//     {
//         printf("Given number %d is negative\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Please enter a number greater than zero or less than zero \n");
//         return 0;
//     }
// }

// WAP to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character.

// int main()
// {

//     int num1;
//     printf("Please enter a number\n");
//     scanf("%d", &num1);
//     if (num1%5==0)
//     {
//         printf("Given number %d is divisible by 5\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is not divisible by 5\n", num1);
//         return 0;
//     }
// }

// WAP to which takes the length of the triangle as an input. Display whether the triangle is valid or not.

// int main()
// {

//     int num1;
//     printf("Please enter a number\n");
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

// WAP which takes the month number as an input and display number of days in that month.

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
