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

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = 1; i <= Nth_term; i++)
//     {
//         printf("\"MySirG\"\n");
//     }
// }

// WAP to print the first N natural numbers.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = 1; i <= Nth_term; i++)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N natural numbers in reverse order.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = Nth_term; i >= 1; i--)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N odd natural numbers.

// int main()
// {
// int Nth_term;
// printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for(int i=1;i<=Nth_term;i++){
//         if(i%2){
//         printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N odd natural numbers in reverse order.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = Nth_term; i >= 1; i--)
//     {
//         if (i % 2)
//         {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N even natural numbers.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = 1; i <= Nth_term; i++)
//     {

//         printf("%d ", 2 * i);
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print the first N even natural numbers in reverse order.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = Nth_term; i >= 1; i--)
//     {

//         printf("%d ", 2 * i);
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print  squares of the first N natural numbers.

// int main()
// {
//     int Nth_term;
//     printf("Please Nth term\n");
//     scanf("%d", &Nth_term);

//     for (int i = 1; i <= Nth_term; i++)
//     {

//         printf("%d ", i * i);
//     }
//     printf("\n");
//     return 0;
// }

// WAP to print cubes of the first N natural numbers.

int main()
{
    int Nth_term;
    printf("Please Nth term\n");
    scanf("%d", &Nth_term);

    for (int i = 1; i <= Nth_term; i++)
    {

        printf("%d ", i * i * i);
    }
    printf("\n");
    return 0;
}

// WAP to print the table of N.

// int main()
// {
//     int Nth_term;
//     printf("Please enter Nth term for table\n");
//     scanf("%d", &Nth_term);

//     for (int i = 1; i <= 10; i++)
//     {

//         printf(" %d * %d = %d \n", Nth_term, i, Nth_term * i);
//     }
//     return 0;
// }