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

// WAP to input a three digit number and display the sum of three digits.

// int main()
// {

//     int num1, sum = 0;
//     printf("Enter a three digit number:\n");
//     scanf("%d", &num1);
//     if (num1 >= 100 && num1 <= 999)
//     {
//         while (num1)
//         {
//             sum =sum+ num1%10;
//             num1 = num1 / 10;
//         }
//         printf("Sum of three digits is %d\n", sum);
//         return 0;
//     }
//     else
//     {
//         printf("Please enter a valid between 100 to 999 number\n");
//         return 0;
//     }
// }

// WAP to find the ASCII code of the character '+'.

// int main()
// {

//     char ch='+';
//     printf("ASCII code of %c is %d\n",ch,ch);
//     return 0;
// }

// WAP to print size of an int, a float, a char and a double type variable.

// int main()
// {
// int a;
// float b;
// char c;
// double d;
//     printf("Size of char = %d bytes \n", sizeof(c));
//     printf("Size of int = %d bytes \n", sizeof(a));
//     printf("Size of float =  %d bytes \n", sizeof(b));
//     printf("Size of double = %d bytes \n", sizeof(d));
//     return 0;

// }

// WAP to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

// int main()
// {
//     int number;
//     printf("Enter a number:\n");
//     scanf("%d",&number);
//     number=number/10*10;
//     printf("Last digit stored as zero of %d \n",number);
//     return 0;
// }

// WAP to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.(Example - number=234 and digit=9 then resulting number is 2349)

// int main()
// {
//     int number,digit;
//     printf("Enter a number and a digit to be appended:\n");
//     scanf("%d%d",&number,&digit);
//     printf("After append a digit number become %d \n",number*10+digit);
//     return 0;
// }

// WAP to delete a digit in a number. (Example - number=2345 and digit=3 then resulting number is 245)

// int main()
// {

//     int number,digit,temp,result=0,place=1;
//     printf("Enter a number and a digit:\n");
//     scanf("%d%d",&number,&digit);
//     temp=number;
// while(temp){
//     int remainder=temp%10;
//     temp=temp/10;
//     if(remainder!=digit){
//         result=result+remainder*place;
//         place=place*10;
//     }else{
//         continue;

//     }
// }
//     if(result==0){
//         printf("Resulting number is 0\n");
//     }else{
//     printf("Resulting number is %d\n",result);
// }
// }

// WAP to input a three digit number and rotate its digits by one position towards right.

// int main()
// {

//     int num;
//     printf("Enter a three digit number:\n");
//     scanf("%d", &num);
//     if (num >= 100 && num <= 999)
//     {

//         int remainder;
//         remainder=num%10;
//         num = num /10;
//         num=remainder*100+num;
//         printf("After one position towards right number is %d\n", num);
//         return 0;
//     }
//     else
//     {
//         printf("Please enter a valid between 100 to 999 number\n");
//         return 0;
//     }
// }

// WAP to input a three digit number and rotate its digits by one position towards left.

int main()
{

    int num;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)
    {
        int remainder;
        remainder = num % 100;
        num = num / 100;
        num = remainder * 10 + num;
        printf("After one position towards left number is %d\n", num);
        return 0;
    }
    else
    {
        printf("Please enter a valid between 100 to 999 number\n");
        return 0;
    }
}