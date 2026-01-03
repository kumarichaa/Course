/* 

Assignment5 | More on operators in C Language

WAP to input a three digit number and display the sum of three digits.
WAP to find the ASCII code of the character '+'.
WAP to print size of an int, a float, a char and a double type variable. 
WAP to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
WAP to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.(Example - number=234 and digit=9 then resulting number is 2349)
WAP to delete a digit in a number. (Example - number=2345 and digit=3 then resulting number is 245)
WAP to input a three digit number and rotate its digits by one position towards right.
WAP to input a three digit number and rotate its digits by one position towards left.



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