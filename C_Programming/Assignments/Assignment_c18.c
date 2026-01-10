/*

Assignment18 | More on Star Patterns Problems

1. WAP to print the following patterns:

**********
****  ****
***    ***
**      **
*        *



#include <stdio.h>

int main() {
   for(int i=1;i<=5;i++){
       for(int j=1;j<=10;j++){
               if(j>=7-i && j<=4+i)
               {
                   printf(" ");
               }
           else{
               printf("*");
           }
       }
       printf("\n");
   }

    return 0;
}

*/

/*
*******
*** ***
**   **
*     *

*/

#include <stdio.h>

int main() {
   for(int i=1;i<=4;i++){
       for(int j=1;j<=7;j++){
               if(j>=6-i && j<=2+i)
               {
                   printf(" ");
               }
           else{
               printf("*");
           }
       }
       printf("\n");
   }

    return 0;
}





