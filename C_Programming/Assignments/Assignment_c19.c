/*

Assignment19 | switch control case




*/

// Write the program which takes the month number as an input and display number of days in that month.
/* #include <stdio.h>

int main()
{

    int month_num;
    printf("Enter Month number:\n");
    scanf("%d", &month_num);

    switch (month_num)
    {
    case 1:
        printf("January and number of days = 31\n");
        break;
    case 2:
        printf("February and number of days = 28\n");
        break;
    case 3:
        printf("March and number of days = 31\n");
        break;
    case 4:
        printf("April and number of days = 30\n");
        break;
    case 5:
        printf("May and number of days = 31\n");
        break;
    case 6:
        printf("June and number of days = 30\n");
        break;
    case 7:
        printf("July and number of days = 31\n");
        break;
    case 8:
        printf("August and number of days = 31\n");
        break;
    case 9:
        printf("September and number of days = 30\n");
        break;
    case 10:
        printf("October and number of days = 31\n");
        break;
    case 11:
        printf("November and number of days = 30\n");
        break;
    case 12:
        printf("December and number of days = 31\n");
        break;
    default:
        printf("Enter valid month number between 1 to 12\n");
        break;
    }
    return 0;
}
 */

// Convert the following if-else-if construct into switch case
/* 
#include <stdio.h>

int main()
{

    int var;
    printf("Enter a variable:\n");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
        printf("good\n");
        break;
    case 2:
        printf("better\n");
        break;
    case 3:
        printf("best\n");
        break;
    default:
        printf("invalid\n");
        break;
    }
    return 0;
} */


// Write the program which takes the day number of a week and displays unique greeting message for the day

 #include <stdio.h>

int main()
{

    int day_num;
    printf("Enter day number of a week:\n");
    scanf("%d", &day_num);

    switch (day_num)
    {
    case 1:
        printf("Happy Sunday! Enjoy Weekend\n");
        break;
    case 2:
        printf("Welcome to the Monday. Start your work\n");
        break;
    case 3:
        printf("Repeated Working Tuesday\n");
        break;
    case 4:
        printf("It's meeting, Today is Wednesday\n");
        break;
    case 5:
        printf("Ohh! It's relaxing from work for an hour, It's Thursday\n");
        break;
    case 6:
        printf("Close to weekend, It's last working. It's Friday\n");
        break;
    case 7:
        printf("Happy Saturday\n");
        break;
    default:
        printf("Enter Weekday number between 1 to 7\n");
        break;
    }
    return 0;
}
 
