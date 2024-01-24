#include <stdio.h>

int main()
{
    
    int b;
    int h;
    int l1;
    int l2;
    
    printf(" inserisci la base\n");
    scanf(" %d", &b);

    printf("inserisci l'altezza\n");
    scanf(" %d", &h);
    printf("inserici il primo lato\n");
    scanf(" %d", &l1);
    printf("inserici il secondo lato\n");
    scanf(" %d", &l2);
    printf("A:" " %d\n", (b * h / 2));
    printf("P:" " %d\n", (b + l1 + l2));
}
    