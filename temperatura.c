#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit = 9/5 * celsius + 32;
    float kelvin = celsius + 273.15;
    printf("inserisci una temperatura in celsius\n");
    scanf(" %f", &celsius);
    printf(" %f", (fahrenheit));
    printf(" %f", (kelvin));
    
   if(celsius >= -273.15)
    {
        printf("corretto\n");
    }
    else
    {
        printf("errore\n");
    }


}