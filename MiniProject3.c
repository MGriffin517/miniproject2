/***********************************************************************************************
Elet 1102
Michael Griffin
12/14/2020
v 1.01

This program calculates the price of a toll based on time of day and day of week. The program asks users
to input what time they went through the toll, what day of the week they went through the toll, and 
how many exits they passed.
***********************************************************************************************/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

struct time 
{
    int hour;
    int minute;
};

int main()
{
struct time when;
int items;
int dayOfWeek;
int exitNumber;
float passBalance;

float toll1 = 1.55; float toll1WH = 1.00;
float toll2 = 2.65; float toll2WH = 2.05;
float toll3 = 2.35; float toll3WH = 2.45;           //floats on the left represent the prices of the tolls for different times during weekdays.
float toll4 = 1.25; float toll4WH = 2.60;           //floats on the right represent the prices of the tolls for different times on holidays or weekends.
                    float toll5WH = 2.05;
                    float toll6WH = 0.55;

printf("Enter the time in 24 hour format, with a colon, (HH:MM) that you travelled through the toll here: ");
items = scanf("%02d:%02d", &when.hour, &when.minute);

printf("Enter how much money is currently on your Quick Pass here after the dollar sign: $");
scanf("%f", &passBalance);

printf("Was this on a weekday or a weekend/holiday? (Enter 0 for weekday, Enter 1 for weekend/holiday) here : ");
scanf("%d", &dayOfWeek);

/***************************************************************************************************************************
If statements for weekdays
***************************************************************************************************************************/

if ( when.hour < 6 && dayOfWeek == 0)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll1 + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 6 || when.hour < 10 && dayOfWeek == 0)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll2 + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 10 || when.hour < 18 && dayOfWeek == 0)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll3 + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 18 || when.hour < 25 && dayOfWeek == 0)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll4 + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

/*******************************************************************************************************************************
if statements for holidays/weekends
*******************************************************************************************************************************/

else if ( when.hour < 8 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll1WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 8 || when.hour < 12 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll2WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 12 || when.hour < 16 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll3WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 16 || when.hour < 19 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll4WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 19 || when.hour < 22 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll5WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}

else if ( when.hour >= 22 || when.hour < 25 && dayOfWeek == 1)
{
    printf("Enter how many exits you passed (must be at least 1 exit, cannot enter 0) here : ");
    scanf("%d", &exitNumber);
    float totalTollPrice = (toll6WH + (exitNumber * .10));
    printf("\nYour toll price expected to pay is: $%.2f", totalTollPrice);
    float balanceLeft = passBalance - totalTollPrice;
    printf("\nYou have $%.2f left on your Quick Pass.", balanceLeft);
}
    return 0;
}