#include <stdio.h>

int main()
{
printf("\n| "); printf(" Item Number |"); printf(" Description         |"); printf(" Discount 0-299 |");
printf(" Discount 300-499 |"); printf(  "Discount 500+ |");


printf("\n| ");
printf(" 0           |"); printf(" Resistor            |"); printf(" 2.5 Percent    |"); printf(" 5 Percent        |"); printf(" 10 Percent   |");

printf("\n| ");
printf(" 1           |"); printf(" Capacitor           |"); printf(" 2.5 Percent    |"); printf(" 5 Percent        |"); printf(" 10 Percent   |");

printf("\n| ");
printf(" 2           |"); printf(" Transistor          |"); printf(" 2.5 Percent    |"); printf(" 5 Percent        |"); printf(" 10 Percent   |");

printf("\n| ");
printf(" 3           |"); printf(" Integrated Circuits |"); printf(" 2.5 Percent    |"); printf(" 5 Percent        |"); printf(" 10 Percent   |\n\n");

int itemNumber;
int itemQuantity;

printf("Enter item number here: ");
scanf("%d", &itemNumber);
printf("Enter quantity of item here: ");
scanf("%d", &itemQuantity);

float resistorPrice = 0.5;
float capacitorPrice = 0.75;
float transistorPrice = 0.75;
float icPrice = 1.25;
/******************************************************************************************************
Calculations for resistor
*******************************************************************************************************/
if(itemNumber == 0 && itemQuantity > 0 && itemQuantity <= 299)
{
    float totalPrice = (itemQuantity * resistorPrice);
    float discountPrice = totalPrice - (totalPrice * .025);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 0 && itemQuantity <= 499)
{
    float totalPrice = (itemQuantity * resistorPrice);
    float discountPrice = totalPrice - (totalPrice * .05);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 0 && itemQuantity >= 500)
{
    float totalPrice = (itemQuantity * resistorPrice);
    float discountPrice = totalPrice - (totalPrice * .1);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}
/******************************************************************************************************
Calculations for capacitor
*******************************************************************************************************/
else if(itemNumber == 1 && itemQuantity > 0 && itemQuantity <= 299)
{
    float totalPrice = (itemQuantity * capacitorPrice);
    float discountPrice = totalPrice - (totalPrice * .025);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 1 && itemQuantity <= 499)
{
    float totalPrice = (itemQuantity * capacitorPrice);
    float discountPrice = totalPrice - (totalPrice * .05);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 1 && itemQuantity >= 500)
{
    float totalPrice = (itemQuantity * capacitorPrice);
    float discountPrice = totalPrice - (totalPrice * .1);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}
/******************************************************************************************************
Calculations for transistor
*******************************************************************************************************/
else if(itemNumber == 2 && itemQuantity > 0 && itemQuantity <= 299)
{
    float totalPrice = (itemQuantity * transistorPrice);
    float discountPrice = totalPrice - (totalPrice * .025);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 2 && itemQuantity <= 499)
{
    float totalPrice = (itemQuantity * transistorPrice);
    float discountPrice = totalPrice - (totalPrice * .05);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 2 && itemQuantity >= 500)
{
    float totalPrice = (itemQuantity * transistorPrice);
    float discountPrice = totalPrice - (totalPrice * .1);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}
/******************************************************************************************************
Calculations for integrated circuits
*******************************************************************************************************/
else if(itemNumber == 3 && itemQuantity > 0 && itemQuantity <= 299)
{
    float totalPrice = (itemQuantity * icPrice);
    float discountPrice = totalPrice - (totalPrice * .025);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}

else if(itemNumber == 3 && itemQuantity <= 499)
{
    float totalPrice = (itemQuantity * icPrice);
    float discountPrice = totalPrice - (totalPrice * .05);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}
else if(itemNumber == 3 && itemQuantity >= 500)
{
    float totalPrice = (itemQuantity * icPrice);
    float discountPrice = totalPrice - (totalPrice * .1);
    printf("Resistor price originally: %f\n", totalPrice);
    printf("Resistor price after discount: %f", discountPrice);
}
    return 0;
}
