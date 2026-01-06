/*

Assignment12 | While loop

WAP to print "MySirG" N times on the screen
WAP to print the first N natural numbers.
WAP to print the first N natural numbers in reverse order.
WAP to print the first N odd natural numbers.
WAP to print the first N odd natural numbers in reverse order.
WAP to print the first N even natural numbers.
WAP to print the first N even natural numbers in reverse order.
WAP to print  squares of the first N natural numbers.
WAP to print cubes of the first N natural numbers.
WAP to print the table of N.

*/

#include <stdio.h>

// WAP to print "MySirG" N times on the screen

int main()
{
    int N;
    printf("Enter value of N: \n");
    scanf("%d", &N);

    while (N--) // first
    {
        printf("MySirG\n");
    }
    return 0;
}

// WAP to print the first N natural numbers.

// int main()
// {
//     int N,i=1;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while (i <= N)
//     {
//         printf("%d ", i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N natural numbers in reverse order.

// int main()
// {
//     int N;
//        printf("Enter value of N: \n");

//     scanf("%d", &N);
//
//     while(N >= 1)
//     {
//         printf("%d ", N);
//         N--;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N odd natural numbers.

// int main()
// {
// int N,i=1;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(i<=N){
//         if(i%2){
//         printf("%d ",i);
//         }
// i++;
//     }
//     printf("\n");
//     return 0;
// }

// Method 2 | print first N odd natural numbers = 2n-1
// int main()
// {
// int N,i=1;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(i<=N){
//
//         printf("%d ",(2*i-1));
//         i++;
//
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N odd natural numbers in reverse order.

// int main()
// {
//    int N;
//        printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(N >= 1)
//     {
//         if (N % 2)
//         {
//             printf("%d ", N);
//
//         }
//         N--;
//     }
//     printf("\n");
//     return 0;
// }

// Method 2 | print first N odd natural numbers = 2n-1

// int main()
// {
//     int N;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(N >= 1)
//     {
//         printf("%d ", (2 * N - 1));
//         N--;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N even natural numbers.

// int main()
// {
//     int N,i=1;
//        printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(i <= N)
//     {

//         printf("%d ", 2 * i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N even natural numbers in reverse order.

// int main()
// {
//    int N;
//        printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while (N>= 1)
//     {

//         printf("%d ", 2 * N);
//         N--;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print  squares of the first N natural numbers.

// int main()
// {
//     int N,i=1;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while (i <= N)
//     {

//         printf("%d ", i * i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print cubes of the first N natural numbers.

// int main()
// {
//     int N,i=1;
//         printf("Enter value of N: \n");

//     scanf("%d", &N);

//     while(i <= N)
//     {

//         printf("%d ", i * i * i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the table of N.

// int main()
// {
//     int N,i=1;
//     printf("Enter value of N \n");
//     scanf("%d", &N);

//     while(i <= 10)
//     {

//         printf(" %d * %d = %d \n", N, i, N * i);

//         i++;
//     }
//     return 0;
// }