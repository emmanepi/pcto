#include <stdio.h>
int main()
{
    int tempo;
    int scelta;
    int intolleranza;
    char cibointollerante[50];
    char nome[20];
    char cognome[20];
    char nomeutente[20];
    char password[10];
    printf("inserisci nome\n");
    scanf(" %s", nome);
    printf("inserisci cognome\n");
    scanf(" %s", cognome);
    printf("inserisci il tuo nome utente\n");
    scanf(" %s", nomeutente);
    printf("inserisci la password di 10 caratteri che deve contenere una maiuscola\n");
    scanf(" %s", password);
    printf("conferma la tua password\n");
    scanf(" %s", password);
    printf("allega una foto degli alimenti nel tuo frigo\n");
    printf("nel tuo frigo c'è.....\n");
    printf("sei intollerante a qualcosa?\n premi 1 se sì\n premi 2 se no\n");
    scanf(" %d", &intolleranza);
    if(intolleranza == 1)
    {
        printf("a che cosa?\n");
        scanf(" %s", cibointollerante);
    }
    else if(intolleranza == 2)
    
    printf("che abitudini alimentari hai?\n se sei vegetariano/a premi 1\n sei sei vegano/a premi 2\n se sei onnivoro/a premi 3\n");
    scanf(" %d", &scelta);
    if(scelta == 1)
    {
        printf(" primo:\n secondo:\n contorno:\n");
    }
    else if(scelta == 2)
    {
        printf("primo:\n secondo:\n contorno:\n");
    }
    else if(scelta == 3)
    {
        printf("primo:\n secondo:\n contorno:\n");
    }

}
