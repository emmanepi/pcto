#include <stdio.h>

int main()
{
    int numero;
    int x;
    printf("inserisci un numero\n");
    scanf(" %d", &numero);
    x = 2;
    while(x < numero)
    {
        if(numero % x == 0)
        { 
            printf("non è primo\n");
            break;
        }
        else
        {
            x = x + 1;
        }
        
    }
    if(numero == x)
    {
        printf("primo\n");
    }
}
    