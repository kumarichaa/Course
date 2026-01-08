/*

Assignment17 | Star Patterns Problems

1. WAP to print the following patterns:
*
**
***
****
*****


*/

#include <stdio.h>

// int main(){
//     for(int i=0;i<=4;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
2. WAP to print the following patterns:

1
12
123
1234
12345



int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
3. WAP to print the following patterns:

1
23
456
78910



int main(){
    int k=0;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",++k);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
4. WAP to print the following patterns:

A
AB
ABC
ABCD
ABCDE



int main(){

    for(int i=1;i<=5;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
5. WAP to print the following patterns:

1
21
321
4321



int main()
{

    int k =0;
    for (int i = 1; i < 5; i++)
    {
        k=k+i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}

*/

/*
6. WAP to print the following patterns:

*****
****
***
**
*



int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/

/*
7. WAP to print the following patterns:

ABCDE
 ABCD
  ABC
   AB
    A


int main()
{
    for (int i = 1; i <= 5; i++)
    {
    char ch = 'A';
        for (int j = 1; j <= 5; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
8. WAP to print the following patterns:

*****
 ****
  ***
   **
    *



int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/

/*
9. WAP to print the following patterns:

ABCDE
 BCDE
  CDE
   DE
    E



int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("%c", ch++);
        }
        printf("\n");
        ch = 'A' + i;
    }
    return 0;
}
*/

/*
10. WAP to print the following patterns:

    *
   **
  ***
 ****
*****



int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {
            if (j <=5-i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");

    }
    return 0;
}


*/

/*
11. WAP to print the following patterns:

*****
*   *
*   *
*   *
*****

*/

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {
            if (i >= 2 && i <= 4)
            {
                if (j == 1 || j == 5)
                {
                    printf("*");
                }
                else
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}
