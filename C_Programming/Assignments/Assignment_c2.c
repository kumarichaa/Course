/* 

Assignment2 | printf() and scanf()

WAP to calculate average of three integers. Numbers are given by the user.
WAP to calculate circumference of a circle.
WAP to calculate simple interest.
WAP to calculate volume of a cuboid.
Write a program to ask user about the cost of price and selling price banana per dozen. calculate the profit or loss earned upon 25 selling bananas.


*/

#include <stdio.h>

// WAP to calculate average of three integers. Numbers are given by the user.


// int main()
// {

//     int num1,num2,num3,AVG;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     AVG=(num1+num2+num3)/3;
//     printf("Average is %d\n",AVG);

    
//     return 0;
// }

// WAP to calculate circumference of a circle.

// int main()
// {

//     int radius;
//     printf("Enter radius of circle");
//     scanf("%d",&radius);
//     printf("Circumference of a circle is %.2f\n",2*3.14*radius);

//     return 0;
// }


// WAP to calculate simple interest.

// int main()
// {

//     float principal,rate,time;
//     printf("Enter principal,rate and time");
//     scanf("%f%f%f",&principal,&rate,&time);
//     printf("SImple Interest is %.2f\n",(principal*rate*time)/100);

   
//     return 0;

// }

// WAP to calculate volume of a cuboid.

// int main()
// {

//     int length,breadth,height;
//     printf("Enter length,breadth and height");
//     scanf("%d%d%d",&length,&breadth,&height);
//     printf("Volume of cuboid is %d\n",length*breadth*height);

   
//     return 0;
// }

// Write a program to ask user about the cost of price and selling price banana per dozen. calculate the profit or loss earned upon 25 selling bananas.

int main()
{

    float cost_price,selling_price,profit_loss;
    printf("Enter cost price and selling price per dozen bananas");
    scanf("%f%f",&cost_price,&selling_price);
    profit_loss=(selling_price - cost_price)*(25.0/12.0);
    if(profit_loss>0){
        printf("Profit earned upon selling 25 bananas is %.2f\n",profit_loss);
    }
    else if(profit_loss<0){
        printf("Loss incurred upon selling 25 bananas is %.2f\n",-profit_loss);
    }
    else{
        printf("No profit no loss upon selling 25 bananas\n");
    }
   
    return 0;
} 