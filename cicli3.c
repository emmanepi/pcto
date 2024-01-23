#include <stdio.h>

int main()
{
    int pezzo;
    int prezzo;
    int sconto;
    int sconto2;
    printf("inserisci il numero di pezzi\n");
    scanf(" %d", &pezzo);
    prezzo = pezzo * 5;
    while ( pezzo > 0)
    {
        if((pezzo >= 30) && (pezzo < 50))
        {
            sconto = (prezzo * 0.9);
            printf("il totale da pagare è:" " %d\n", (sconto));
        }
        else if( pezzo >= 50)
        { 
                sconto = (prezzo * 0.85);
                printf(" il totale da pagare è:" " %d\n", (sconto2));
        }
        else 
        {
            printf("non c'è sconto" " %d\n", (prezzo));
        }
        printf("inserisci il numero di pezzi\n");
        scanf(" %d", &pezzo);
    
    }
}