/*

Assignment4 | Operators in C Language

WAP to calculate size of a character constant.
WAP to calculate size of a real constant.
WAP with one character type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
WAP to swap values of two int variables.
WAP to swap values of two int variables without using third variable.
WAP to swap values of two int variables without using third variable and + - operators.
WAP to swap values of two int variables without using third variable and arithmetic operators
WAP to swap values of two int variables in a single line arithmetic expression.


*/

#include <stdio.h>

// WAP to calculate size of a character constant.

// int main()
// {

//     printf("Size of character constant %d\n", sizeof(char));
//     printf("Size of integer constant %d\n", sizeof(int));
//     printf("Size of float constant %d\n", sizeof(float));
//     printf("Size of double constant %d\n", sizeof(double));
//     printf("Size of character constant ' ' = %zu\n", sizeof(' '));
//     printf("Size of character constant 'A' = %zu\n", sizeof('A'));
//     return 0;
// }

// WAP to calculate size of a real constant.

// int main()
// {
//     printf("Size of real constant = %zu\n", sizeof(34.56789));
//     return 0;
// }

// WAP with one character type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

// int main()
// {
//     char ch1='A';
//     printf("Changed value of character is %c\n",++ch1);
//     return 0;
// }

// WAP to swap values of two int variables.

// int main()
// {

//     int num1,num2,swap_num;
//     printf("Enter two numbers:\n");
//     scanf("%d%d",&num1,&num2);
//     swap_num=num1;
//     num1=num2;
//     num2=swap_num;
//     printf("After swapping num1=%d and num2=%d\n",num1,num2);
//     return 0;
// }

// WAP to swap values of two int variables without using third variable.

// int main()
// {

//     int num1, num2;
//     printf("Enter two numbers:\n");
//     scanf("%d%d", &num1, &num2);
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;
//     printf("After swapping num1=%d and num2=%d\n", num1, num2);
//     return 0;
// }

// WAP to swap values of two int variables without using third variable and + - operators.

// int main()
// {

//     int num1, num2;
//     printf("Enter two numbers:\n");
//     scanf("%d%d", &num1, &num2);
//     num1 = num1 ^ num2;
//     num2 = num1 ^ num2;
//     num1 = num1 ^ num2;
//     printf("After swapping num1=%d and num2=%d\n", num1, num2);
//     return 0;
// }

// WAP to swap values of two int variables without using third variable and arithmetic operators
// use compound operators
int main()
{

    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    printf("After swapping num1=%d and num2=%d\n", num1, num2);
    return 0;
}

// WAP to swap values of two int variables in a single line arithmetic expression.

// int main()
// {

//     int num1, num2;
//     printf("Enter two numbers:\n");
//     scanf("%d%d", &num1, &num2);
//     num1 = (num1 + num2) - (num2 = num1);

//     printf("After swapping num1=%d and num2=%d\n", num1, num2);
//     return 0;
// }