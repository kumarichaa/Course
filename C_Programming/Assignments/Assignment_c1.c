/* Assignment1 | input output instructions

Write a program to print Hello Students on the screen.
Write a program to print Hello on the first line and Students on the second line
Write a program to print "MySirG" on the screen Remember MySirG is double quotes.
Write a program to print \n on the screen
Write a program to print \r on the screen 
Write a program to print "Teacher's Day" on the screen. (Remember to print single and double quotes)

 */

#include <stdio.h>

// int main()
// {

//     printf("Hello,Students\n");
//     printf("Hello\nStudents\n");
//     printf("\"MySirG\"\n");
//     printf("\\n\n");
//     printf("\\r\n");
//     printf("\"Teacher\'s Day\"\n");

//     return 0;
// }

// Write a program to calculate sum of two integers. Numbers are taken from the user through the keyboard.


// int main()
// {

//     int num1,num2;
//     printf("Enter two numbers");
//     scanf("%d%d",&num1,&num2);
//     printf("Sum is %d\n",num1+num2);

//     return 0;
// }

// Write a program to calculate area of rectangle. Input appropriate data from the user.


// int main()
// {

//     int length,breadth;
//     printf("Enter two numbers");
//     scanf("%d%d",&length,&breadth);
//     printf("Area of rectangle is %d\n",length*breadth);

//     return 0;
// }


// WAP to find the area of circle. Take radius of circle from user as input.

int main()
{

    int radius;
    printf("Enter radius of circle");
    scanf("%d",&radius);
    printf("Area of circle is %.2f\n",3.14*radius*radius);

    printf("Hello,Stud\rents,welcome to C\rpr");

    return 0;
}