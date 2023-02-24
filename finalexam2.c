/*******************************************************************************************
Michael Griffin
Elet 1102
12/21/2020
v.1.01

This program will display the answers to any user inputed number multiplied by everything up
to 12. It also asks the user at the end if the user would like to see another multiplication table, 
where they can enter 1 to see another table, or 2 to display a closing message.
********************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
int i;
int j;
int option;


do
{
printf("Enter the integer you would like to see multiplication tables for here: ");
scanf("%d", &j);

for(int i = 1; i <= 12; i++)
{
    printf("%d * %d = %d \n", j, i, j * i);
}


printf("Would you like to see another multiplication table? Enter 1 for YES and 2 for NO here: ");
scanf("%d", &option);
}
while (option != 2);

printf("\nHave a nice day!");

return 0;
}