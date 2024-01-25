#include <math.h>
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int delta;
    int x1;
    int x2;
    printf("inserisci un numero\n");
    scanf(" %d", &a);
    printf("inserisci un numero\n");
    scanf(" %d", &b);
    printf("inserisci un numero\n");
    scanf(" %d", &c);
    delta = (b*b) - 4*a*c;
    printf("il delta è" " %d\n", delta);
    if((delta>0))
    {
    x1 = (-b + sqrt(delta))/2 * a;
    printf(" x1 è:" " %d\n", x1);
    x2 = (-b - sqrt(delta))/ 2* a;
    printf(" x2 è:" " %d\n", x2);
    }
    if((delta==0))
    {
        x1=x2;
        printf("x1 è:" " %d\n", x1);
        x2 = x1;
        printf("x2 è:" " %d\n", x2);
    }
    if((delta<0))
    {
        printf("impossibile\n");
    }
}   