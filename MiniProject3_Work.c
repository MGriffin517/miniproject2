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

int tollTime; 

printf("Enter the time in 24 hour format (HH:MM) that you travelled through the toll here: ");
items = scanf("%02d:%02d", &when.hour, &when.minute);
if ( items == 2)
{
printf("You entered: %02d:%02d", when.hour, when.minute);
}

























    return 0;
}