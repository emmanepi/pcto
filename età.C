#include <stdio.h>

int main()
{
    int emma;
    int valerio; 
    int irene;
    int sara; 
    int lucrezia;
    printf("inserisci l'età di emma\n");
    scanf(" %d", &emma);
    printf("inserisci l'età di valerio\n");
    scanf(" %d", &valerio);
    printf("inserisci l'età di irene\n");
    scanf(" %d", &irene);
    printf("inserisci l'età di sara\n");
    scanf(" %d", &sara);
    printf("inserisci l'età di lucrezia\n");
    scanf(" %d", &lucrezia);
    printf("R= %d\n", (valerio + irene + emma + sara + lucrezia));
}