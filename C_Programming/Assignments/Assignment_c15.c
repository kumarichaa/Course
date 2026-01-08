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

    int count = 0;
    printf("Prime numbers under 100 are: \n");
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                if (j == i && count == 1)
                {
                    printf("%d ", i);
                    break;
                }
            }
            continue;
        }
        count = 0;
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
//                 count++;
//                 if (j == i && count == 1)
//                     printf("%d ", i);
//             }
//         }
//         count = 0;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print next prime number of a given number.
// int main()
// {
//     int num, count = 0;
//     printf("Enter a numbers: \n");
//     scanf("%d", &num);
//     for (int i = num + 1; i <= num * num; i++)
//     {
//         for (int j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//                 if (j == i && count == 1)
//                 {
//                     printf("Next prime number is %d\n", i);
//                     return 0;
//                 }
//             }
//         }
//         count = 0;
//     }
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
