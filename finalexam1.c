/***************************************************************************************************************
Michael Griffin
Elet 1102
12/21/2020
v.1.01

This program is designed to take the resistance of 5 user inputted resistance values and calculate the voltage drop 
across each resistor.
****************************************************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
int i;
float voltage [5];
float resistorValue[5];
int totalResistance = 0;


printf("Input voltage applied to circuit here: ");
scanf("%d", &voltage);
printf("\n");


for(int i = 0; i <= 4; i++)
{
    printf("Enter ohms of 5 resistors here: ");
    scanf("%d", &resistorValue[i]);
    totalResistance += resistorValue[i];
    
}

printf("Total resistance of this circuit is: %d\n", totalResistance);

printf("Voltage drop across each resistor is: \n");

for(int i = 0; i <= 4; i++)
{
    voltage[i] = resistorValue[i] / totalResistance;
    printf("%f\n", voltage);
}

    return 0;
}