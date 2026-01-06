/*

Assignment6 | More on operators in C Language

Assume price of 1 USD is INR 84.23. WAP to take the amount in INR from the user and convert it into USD.
WAP to input a three digit number and rotate its digits by one position towards right.
what will be the value stored in the variable 'x' after execution of the following code snippet?
x=10>8>4;
what will be the value stored in the variable 'x' after execution of the following code snippet?
x=!2>-2;
what will be the value stored in the variable 'x' after execution of the following code snippet?
x=3<0&&5>0;



*/

#include <stdio.h>

// Assume price of 1 USD is INR 84.23. WAP to take the amount in INR from the user and convert it into USD.

// int main()
// {

//     float usd_amount, inr_amount;
//     printf("Please enter the amount in INR from the user\n");
//     scanf("%f", &inr_amount);
//     usd_amount = inr_amount / 84.23;
//     printf("Equivalent USD amount is %.2f\n", usd_amount);
//     return 0;
// }

// WAP to input a three digit number and rotate its digits by one position towards right.

// int main()
// {

//     int num1;
//     printf("Please enter a three digit number\n");
//     scanf("%d", &num1);
//     if (num1 >= 100 && num1 <= 999)
//     {
//         num1 = num1 >> 1;
//         printf("After one position towards right number is %d\n", num1);
//         return 0;
//     }
//     else
//     {
//         printf("Please enter a valid between 100 to 999 number\n");
//         return 0;
//     }
// }

// what will be the value stored in the variable 'x' after execution of the following code snippet?
// x=10>8>4;

// int main()
// {

//     int x;
//     x=10>8>4;
//     printf("Value stored in x is %d\n",x);
//     return 0;
// }

// what will be the value stored in the variable 'x' after execution of the following code snippet?
//  x=!2>-2;

// int main()
// {

//     int x;
//     x=!2>-2;
//     printf("Value stored in x is %d\n",x);
//     return 0;
// }

// what will be the value stored in the variable 'x' after execution of the following code snippet?
//  x=3<0&&5>0;
int main()
{

    int x;
    x = 3 < 0 && 5 > 0;
    printf("Value stored in x is %d\n", x);
    return 0;
}
