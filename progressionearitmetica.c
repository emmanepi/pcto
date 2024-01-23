#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d = b - a;
    int e = c - b;
    
    printf("inserisci 3 numeri\n");
    scanf(" %d" " %d" " %d", &a, &b, &c);
    
    if(d == e)
    {
        printf("è una progressione aritmetica\n");
    }
    else
    {
        printf("non è una progressione aritmetica\n");
    }
}