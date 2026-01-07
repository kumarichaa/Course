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
//     }else   {
//         printf("Given number %d is Zero\n", num1);
//         return 0;}
//
// }

// WAP to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character.
int main()
{
    char ch;

    printf("Enter a character:\n");
    scanf("%c", &ch); // safer for whitespace

    if (ch >= 'A' && ch <= 'Z')
        printf("'%c' is an Uppercase alphabet\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("'%c' is a Lowercase alphabet\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("'%c' is a digit\n", ch);
    else if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
        printf("'%c' is a special character\n", ch);
    else
        printf("'%c' is not an alphabet\n", ch);

    return 0;
}

// WAP to which takes the length of the triangle as an input. Display whether the triangle is valid or not.

// int main()
// {

//     int length1,length2,length3;
//     printf("Enter lengths of a triangle: \n");
//     scanf("%d%d%d", &length1,&length2,&length3);
//     if (length1+length2>length3&&length1+length3>length2 && length2+length3>length1)
//     {
//         printf("Triangle is valid\n");
//         return 0;
//     }
//     else
//     {
//         printf("Triangle is not valid\n");
//         return 0;
//     }
// }

// WAP which takes the month number as an input and display number of days in that month.

// int main()
// {

//     int month_num;
//     printf("Enter Month number:\n");
//     scanf("%d", &month_num);
//     if (month_num >= 1 && month_num <= 12)
//     {
//         if (month_num == 1)
//         {
//             printf("January and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 2)
//         {
//             printf("February and number of days = 28\n");
//             return 0;
//         }
//         else if (month_num == 3)
//         {
//             printf("March and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 4)
//         {
//             printf("April and number of days = 30\n");
//             return 0;
//         }
//         else if (month_num == 5)
//         {
//             printf("May and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 6)
//         {
//             printf("June and number of days = 30\n");
//             return 0;
//         }
//         else if (month_num == 7)
//         {
//             printf("July and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 8)
//         {
//             printf("August and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 9)
//         {
//             printf("September and number of days = 30\n");
//             return 0;
//         }
//         else if (month_num == 10)
//         {
//             printf("October and number of days = 31\n");
//             return 0;
//         }
//         else if (month_num == 11)
//         {
//             printf("November and number of days = 30\n");
//             return 0;
//         }
//         else
//         {
//             printf("December and number of days = 31\n");
//             return 0;
//         }
//     }
//     else
//     {
//         printf("Please enter valid month number between 1 to 12\n");
//         return 0;
//     }
// }
