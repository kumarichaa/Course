/*

Assignment13 | Use any loop

WAP to calculate sum of first N natural numbers.
WAP to calculate sum of first N odd natural numbers.
WAP to calculate sum of first N even natural numbers.
WAP to calculate sum of squares of first N natural numbers.
WAP to calculate sum of cubes of first N natural numbers.


*/

#include <stdio.h>

// WAP to calculate sum of first N natural numbers.

// Method 1
// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%lld \n", sum);
//     return 0;
// }

// Method 2 | sum of first N natural numbers = N(N+1)/2

// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     sum = (N * (N + 1)) / 2;
//     printf("%lld \n", sum);
//     return 0;
// }

// WAP to calculate sum of first N odd natural numbers.

// Method 1
// int main()
// {
// long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);
//     for(int i=1;i<=N;i++){
//         if(i%2){
//         sum=sum+i;
//         }
//     }
//     printf("%lld\n",sum);
//     return 0;
// }

// Method 2 | sum of first N odd natural numbers = N*N

// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);
//     sum = N * N;
//     printf("%lld \n", sum);
//     return 0;
// }

// WAP to calculate sum of first N even natural numbers.

// Method 1
// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {

//         sum=sum+(2 * i);
//     }
//     printf("%lld\n",sum);
//     return 0;
// }

// Method 2 | sum of first N even natural numbers = N(N+1)
// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     sum = N * (N + 1);
//     printf("%lld \n", sum);
//     return 0;
// }

// WAP to calculate sum of squares of first N natural numbers.

// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {

//         sum = sum + (i * i);
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

// Method 2 | sum of squares of first N natural numbers = N(N+1)(2N+1)/6
int main()
{
    long long sum = 0;
    int N;
    printf("Enter value of N: \n");
    scanf("%d", &N);

    sum = (long long)N * (N + 1) * (2 * N + 1) / 6;
    printf("%lld \n", sum);
    return 0;
}

// WAP to calculate sum of cubes of the first N natural numbers.

// int main()
// {
//    long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {

//         sum = sum + (i * i * i);
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

// Method 2 | sum of cubes of first N natural numbers = [N(N+1)/2]^2
// int main()
// {
//     long long sum = 0;
//     int N;
//     printf("Enter value of N: \n");
//     scanf("%d", &N);

//     sum = (N * (N + 1) / 2);
//     sum = sum * sum;
//     printf("%lld \n", sum);
//     return 0;
// }
