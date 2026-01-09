/*

Assignment 9 | Decision Control Statements


WAP which takes the cost price and selling price of a product from the user. Calculate and print the profit or loss percentage.
WAP to take marks of 5 subjects from the user. Assume marks are out of 100 and passing marks is 33. Display whether the candidate passed or failed.
WAP to check whether a given alphabet is uppercase or lowercase.
WAP to check whether a given number is divisible by 3 AND divisible by 2.
WAP to check whether a given number is divisible by 7 OR divisible by 3.

*/

#include <stdio.h>

// WAP which takes the cost price and selling price of a product from the user. Calculate and print the profit or loss percentage.

// int main()
// {
//     float cost_price, selling_price;
//     float profit, loss, profit_percentage, loss_percentage;

//     printf("Enter cost price and selling price:\n");
//     scanf("%f %f", &cost_price, &selling_price);

//     if (selling_price >= cost_price)
//     {
//         profit = selling_price - cost_price;
//         profit_percentage = (profit / cost_price) * 100;
//         printf("Profit percentage = %.2f%%\n", profit_percentage);
//     }
//     else
//     {
//         loss = cost_price - selling_price;
//         loss_percentage = (loss / cost_price) * 100;
//         printf("Loss percentage = %.2f%%\n", loss_percentage);
//     }

//     return 0;
// }

//  WAP to take marks of 5 subjects from the user. Assume marks are out of 100 and passing marks is 33.

// int main()
// {
//     int hindi, english, math, science, social_science;

//     printf("Enter marks of 5 subjects:\n");
//     scanf("%d %d %d %d %d",
//           &hindi, &english, &math, &science, &social_science);

//     if (hindi >= 33 && english >= 33 && math >= 33 &&
//         science >= 33 && social_science >= 33)
//         printf("Candidate has PASSED the examination\n");
//     else
//         printf("Candidate has FAILED the examination\n");

//     return 0;
// }

// WAP to check whether a given alphabet is uppercase or lowercase.

// int main()
// {
//     char ch;

//     printf("Enter a character:\n");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z')
//         printf("'%c' is an Uppercase alphabet\n", ch);
//     else if (ch >= 'a' && ch <= 'z')
//         printf("'%c' is a Lowercase alphabet\n", ch);
//     else
//         printf("'%c' is not an alphabet\n", ch);

//     return 0;
// }

// WAP to check whether a given number is divisible by 3 AND divisible by 2.

// int main()
// {
//     int num;

//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     if (num % 3 == 0 && num % 2 == 0)
//         printf("%d is divisible by both 3 and 2\n", num);
//     else
//         printf("%d is NOT divisible by both 3 and 2\n", num);

//     return 0;
// }

// WAP to check whether a given number is divisible by 7 OR divisible by 3.

int main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
        printf("%d is divisible by 7 or 3\n", num);
    else
        printf("%d is NOT divisible by 7 or 3\n", num);

    return 0;
}