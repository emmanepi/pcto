#include <stdio.h>

int main()
{
    int x;
    printf("inserisci la tua età\n");
    scanf(" %d", &x);
    if(x >= 18)
    {
        printf(" sei maggiorenne\n");
    }
    else 
    {
        printf("non sei maggiorenne\n");
    }
    return(0);
}