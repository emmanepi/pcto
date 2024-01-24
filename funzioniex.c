#include <stdio.h>

int main()
{
    int lat1;
    int lat2;
    int lat3;
    printf("iserisci una lunghezza\n");
    scanf(" %d", &lat1);
    printf("inserisci una lunghezza\n");
    scanf(" %d", &lat2);
    printf("inserisci una lunghezza\n");
    scanf(" %d", &lat3);
    while((lat1 + lat2 > lat3) && (lat3 + lat1 > lat2) && (lat3 + lat2 > lat1))
    {
        if((lat1 == lat2) && (lat2 == lat3) && (lat1 == lat3))
            {
                 printf("il triangolo è equilatero\n");
            }
        else if ((lat1 != lat2) && (lat2 != lat3) && (lat1 != lat3))
            {
                printf("il triangolo è scaleno\n");
            }
        else if ((lat1 == lat2) && (lat1 != lat3) && (lat2 != lat3) || (lat2 == lat3) && (lat2 != lat1) && (lat3 != lat1) || (lat1 == lat3) && (lat1 != lat2) && (lat3 != lat2))
            {
                printf("è un triangolo isoscele\n");
            }
        
    }
    if((lat1 == 0) && (lat2 == 0) && (lat3 == 0) || (lat1 == 0) && (lat2 > 0) && (lat3 > 0)|| (lat == 0 ) && 
    {
        printf("errore\n");
    }
}
