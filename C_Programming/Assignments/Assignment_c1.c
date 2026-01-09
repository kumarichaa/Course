/* Assignment1 | input output instructions

Write a program to print Hello Students on the screen.
Write a program to print Hello on the first line and Students on the second line
Write a program to print "MySirG" on the screen Remember MySirG is double quotes.
Write a program to print \n on the screen
Write a program to print \r on the screen
Write a program to print "Teacher's Day" on the screen. (Remember to print single and double quotes)
Write a program to calculate sum of integers. Numbers are taken from user through keyboard.
Write a program to calculate square of a given number. Number is entered by the user.
Write a program to calculate area of a rectangle. Input appropriate data from the user.
write a program to find area of a the circle . Take radius of a circle from user as input.


 */

#include <stdio.h>

// Write a program to print Hello Students on the screen.

// int main()
// {
//     printf("Hello,Students\n");
//     return 0;
// }

// Write a program to print Hello on the first line and Students on the second line

// int main()
// {
//     printf("Hello\nStudents\n");
//     return 0;
// }

// Write a program to print "MySirG" on the screen Remember MySirG is double quotes.

// int main()
// {
//     printf("\"MySirG\"\n");
//     return 0;
// }

// Write a program to print \n on the screen

// int main()
// {
//     printf("\\n\n");
//     return 0;
// }

// Write a program to print \r on the screen

// int main()
// {
//     printf("\\r\n");
//     return 0;
// }

// Write a program to print "Teacher's Day" on the screen. (Remember to print single and double quotes)

// int main()
// {
//     printf("\"Teacher\'s Day\"\n");
//        return 0;
// }

// Write a program to calculate sum of two integers. Numbers are taken from the user through the keyboard.

// int main()
// {

//     int num1,num2;
//     printf("Enter two numbers:\n");
//     scanf("%d%d",&num1,&num2);
//     printf("Sum is %d\n",num1+num2);

//     return 0;
// }

// Write a program to calculate area of rectangle. Input appropriate data from the user.

// int main()
// {

//     int length,breadth;
//     printf("Enter two numbers:\n");
//     scanf("%d%d",&length,&breadth);
//     printf("Area of rectangle is %d\n",length*breadth);

//     return 0;
// }

// WAP to find the area of circle. Take radius of circle from user as input.

int main()
{

    float radius;
    printf("Enter radius of circle:\n");
    scanf("%f", &radius);
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);

    return 0;
}