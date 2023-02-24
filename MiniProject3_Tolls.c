#include <stdio.h>
#include <time.h>

int main()
{
char string[100]={0};

int ret = 0, hour = 0, min = 0;

printf("\nEnter the time in 24 hour format (HH:MM) here: ");
fgets(string,100,stdin);
sscanf(string , "%d:%02d", &hour, &min);

printf("\nYou entered: %d:%02d", hour, min);








    return 0;
}