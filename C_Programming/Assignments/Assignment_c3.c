/* 

Assignment3 | printf() and scanf()

WAP to input a character from the user and print its ASCII code.
WAP to input a ASCII code from the user and print its corresponding character.
WAP to input three characters from the user and display characters with their corresponding ASCII codes.
Write a program to print last digit of a given number.
WAP to print a given number without its last digit.


*/

#include <stdio.h>

// WAP to input a character from the user and print its ASCII code.


// int main()
// {

//     char ch;
//     printf("Enter a character");
//     scanf("%c",&ch);
//     printf("ASCII code of %c is %d\n",ch,ch);

    
//     return 0;
// }

// WAP to input a ASCII code from the user and print its corresponding character.

// int main()
// {

//     int ascii_code;
//     printf("Enter an ASCII code");
//     scanf("%d",&ascii_code);
//     printf("Character corresponding to ASCII code %d is %c\n",ascii_code,ascii_code);

//     return 0;
// }


// WAP to input three characters from the user and display characters with their corresponding ASCII codes.


// int main()
// {

//     char ch1,ch2,ch3;
//     printf("Enter three characters");
//     scanf("%c%c%c",&ch1,&ch2,&ch3);
//     printf("ASCII code of %c is %d\n",ch1,ch1);
//     printf("ASCII code of %c is %d\n",ch2,ch2);
//     printf("ASCII code of %c is %d\n",ch3,ch3);
    

   
//     return 0;

// }

// Write a program to print last digit of a given number.

// int main()
// {

//     int number,last_digit;
//     printf("Enter a number");
//     scanf("%d",&number);
//     last_digit=number%10;
//     printf("Last digit of %d is %d\n",number,last_digit);

//     return 0;
// }

// WAP to print a given number without its last digit.

int main()
{

    int number,without_last_digit;
    printf("Enter a number");
    scanf("%d",&number);
    without_last_digit=number/10;
    printf("Without Last digit of %d is %d\n",number,without_last_digit);


    return 0;
} 