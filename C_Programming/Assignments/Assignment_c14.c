/*

Assignment14 | Use any loop

WAP to calculate the factorial of a number.
WAP to count digits in a given number.
WAP to check whether a given number is prime or not.
WAP to calculate the LCM of two numbers.
WAP to reverse a given number.

*/

#include <stdio.h>

// WAP to calculate the factorial of a number.

// int main()
// {
//     int number;
//     long long factorial = 1;
//     printf("Enter a Number: \n");
//     scanf("%d", &number);

//     while (number)
//     {
//         factorial = factorial * number;
//         number--;
//     }
//     printf("Factorial is %lld\n", factorial);

//     return 0;
// }

// WAP to count digits in a given number.

// int main()
// {
//     int number,count=0;
//     long long factorial = 1;
//     printf("Enter a Number: \n");
//     scanf("%d", &number);

//     while (number)
//     {
//         count++;
//         number=number/10;

//     }
//     printf("Number of digits are %d\n", count);
//     return 0;

// }

// WAP to check whether a given number is prime or not.

int main()
{

    int n, count = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i == n)
                break;
            continue;
        }
    }
    if (count == 1)
    {
        printf("The number is prime\n");
        return 0;
    }
    else
    {
        printf("The number is not prime\n");
        return 0;
    }
}

// WAP to calculate the LCM of two numbers.
int main()
{

    int num1, num2, lcm;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);

    lcm = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, lcm);
            break;
        }
        lcm++;
    }
    return 0;
}

// WAP to reverse a given number.

int main()
{

    int n, original;
    printf("Enter the number of elements\n");
    scanf("%d", &original);

    n = original;
    int m, reverse = 0;

    while (original > 0)
    {
        m = original % 10;
        reverse = m + reverse * 10;
        original = original / 10;
    }

    printf("Reversed number is %d", reverse);
    return 0;
}

// WAP to calculate a given number is palindrome or not.

int main()
{

    int n, original;
    printf("Enter the number of elements\n");
    scanf("%d", &original);

    n = original;
    int m, reverse = 0;

    while (original > 0)
    {
        m = original % 10;
        reverse = m + reverse * 10;
        original = original / 10;
    }

    printf("Reversed number is %d", reverse);
    if (n == reverse)
    {
        printf("\nThe number is palindrome\n");
        return 0;
    }
    else
    {
        printf("\nThe number is not palindrome\n");
        return 0;
    }
}
