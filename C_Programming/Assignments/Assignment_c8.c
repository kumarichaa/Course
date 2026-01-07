/*

Assignment8 | Decision Control Statements

WAP to check whether a given number is a three digit number or not.
WAP to print greater between two numbers. Print one number if both are same.
Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
WAP to check whether a given year is a leap year or not.
WAP to print greatest among three given numbers. Print number once if the greatest number appears two or three times.


*/

#include <stdio.h>

// WAP to check whether a given number is a three digit number or not.

// int main()
// {

//     int num1;
//     printf("Enter a number: \n");
//     scanf("%d", &num1);
//     if (num1 >= 100 && num1 <= 999)
//     {
//         printf("Given number %d is a three digit number\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Given number %d is not a three digit number\n", num1);
//         return 0;
//     }
// }

// WAP to print greater between two numbers. Print one number if both are same.
//     result=(num1>=num2?num1:num2);

// int main()
// {

//     int num1,num2;
//     printf("Enter two numbers: \n");
//     scanf("%d%d", &num1,&num2);
//     if (num1>=num2)
//     {
//         printf("Number is %d \n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Number is %d \n", num2);
//         return 0;
//     }
// }

// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

// int main()
// {

//     int a, b, c, discriminant;
//     printf("Enter values of a, b and c:\n");
//     scanf("%d %d %d", &a, &b, &c);
//     discriminant = (b * b) - (4 * a * c);
//     if (discriminant > 0)
//         printf("Roots are real and distinct\n");
//     else if (discriminant == 0)
//         printf("Roots are real and equal\n");
//     else
//         printf("Roots are imaginary\n");
//     return 0;
// }

// WAP to check whether a given year is a leap year or not.

// int main()
// {

//     int year;
//     printf("Enter Year: \n");
//     scanf("%d", &year);
//     printf("Given year %d is %s\n", year, ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? " a leap year" : " not a leap year");

//     return 0;
// }

// WAP to print greatest among three given numbers. Print number once if the greatest number appears two or three times.
// result=(num1>=num2?num1:num2);
// result=(result>=num3?result:num3);

int main()
{

    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("Greater Number is %d \n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Greater Number is %d \n", num2);
    else
        printf("Greater Number is %d \n", num3);
    return 0;
}
