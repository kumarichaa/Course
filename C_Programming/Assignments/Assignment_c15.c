/*

Assignment15 | Level up with loops

WAP to print all prime numbers under 100.
WAP to print all prime numbers between given numbers.
WAP to print next prime number of a given number.
WAP to calculate HCF of given two numbers.
WAP to check whether two given numbers are co-prime or not.

*/

#include <stdio.h>

// WAP to print all prime numbers under 100.

int main()
{

    
    printf("All Prime numbers under 100: \n");

    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (j % i == 0)
            {
                if (i == j)
                {
                    printf("%d ", i);
                    break;
                }
            }
        }

    }
    printf("\n");
    return 0;
}

// WAP to print all prime numbers between given numbers.

// int main()
// {
//     int num1, num2, count = 0;
//     printf("Enter two numbers: \n");
//     scanf("%d%d", &num1, &num2);
//     for (int i = num1; i <= num2; i++)
//     {

//         for (int j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 if (i == j)
//                 {
//                     printf("%d ", i);
//                     break;
//                 }
//             }
//         }
//
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print next prime number of a given number.

// int main()
// {
//     int num;
//     printf("Enter a number: \n");
//     scanf("%d", &num);
//     for (int i = num + 1; ; i++)
//     {

//         for (int j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 if (i == j)
//                 {
//                     printf("Next Prime number is %d\n", i);
// break;
//                 }
//             }
//         }
//     }
// return 0;
// }

// WAP to calculate HCF of given two numbers.

// int main()
// {

//     int num1, num2, reminder, hcf;
//     printf("Enter two numbers\n");
//     scanf("%d%d", &num1, &num2);
//     while (1)
//     {
//         if (num1 >= num2)
//         {
//             reminder = num1 % num2;
//             if (reminder == 0)
//             {
//                 hcf = num2;
//                 printf("HCF is %d\n", hcf);
//                 return 0;
//             }
//             num1 = num2;
//             num2 = reminder;
//         }
//         else
//         {
//             reminder = num2 % num1;
//             if (reminder == 0)
//             {
//                 hcf = num1;
//                 printf("HCF is %d\n", hcf);
//                 return 0;
//             }
//             num2 = num1;
//             num1 = reminder;
//         }
//     }
// }

// WAP to check whether two given numbers are co-prime or not.

// int main()
// {

//     int num1, num2, reminder,hcf;
//     printf("Enter two numbers\n");
//     scanf("%d%d", &num1, &num2);
//     while (1)
//     {
//         if (num1 >= num2)
//         {
//             reminder = num1 % num2;
//             if (reminder == 0)
//             {
//                  hcf = num2;
//                 if (hcf == 1)
//                 {
//                     printf("Given numbers are co-prime\n");
//                     return 0;
//                 }
//                 else
//                     printf("Given numbers are not co-prime\n");
//                 return 0;
//             }
//             num1 = num2;
//             num2 = reminder;
//         }
//         else
//         {
//             reminder = num2 % num1;
//             if (reminder == 0)
//             {
//                  hcf = num1;
//                 if (hcf == 1)
//                 {
//                     printf("Given numbers are co-prime\n");
//                     return 0;
//                 }
//                 else
//                     printf("Given numbers are not co-prime\n");
//                 return 0;
//             }
//             num2 = num1;
//             num1 = reminder;
//         }
//     }
// }
