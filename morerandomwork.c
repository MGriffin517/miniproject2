#include <stdio.h>
#include <math.h>

int main()
{
float resistors[5];
float voltages[5];
int i;
float volt;

printf("Input the voltage that was applied to the circuit here: ");
scanf("%f", &volt);

printf("Input the ohm values of 5 resistors here: \n");

for (i = 0; i < 5; i++)
{
    scanf("%f", &resistors[i]);
}

double totalResistance = 0;

for (i = 0; i < 5; i++)
{
    totalResistance += resistors[i];
}

for (i = 0; i < 5; i++)
{
    voltages[i] = (resistors[i] / totalResistance) * volt; 
}

printf("Voltage drop across each resistor is: ");

for (i = 0; i < 5; i++)
{
    printf("%0.1f V\n", voltages[i]);
}

return 0;
}