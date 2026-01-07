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

    int n, count = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    for (int i = 2; i <= 100; i++)
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

// WAP to print all prime numbers between given numbers.
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

// WAP to print next prime number of a given number.


// WAP to calculate HCF of given two numbers.

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

// WAP to check whether two given numbers are co-prime or not.


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
