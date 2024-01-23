#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int e;
    int f;
    int g;
    printf("inserisci tre numeri\n");
    scanf(" %d" " %d" " %d", &a, &b, &c);
     e = a + b;
     f = b + c;
     g = a + c;
    if(e > c && f > b && g > a)
    {
        printf("è un triangolo\n");
    }
    else
    {
        printf("non è un triangolo\n");
    }
}