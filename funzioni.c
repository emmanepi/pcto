#include <stdio.h>

void somma(int a, int b)
{
    printf("la somma dei numeri è:" " %d\n", (a + b));
}
void differenza(int a, int b)
{
    printf("la differenza dei numeri è:" " %d", (a - b));
}
void moltiplicazione( int a, int b)
{
    printf("la moltiplicazione dei numeri è:" " %d", (a * b));
}
void divisione(int a, int b)
{
    printf("la divisione dei numeri è:" " %d", (a / b));
}

int main()
{
    int x;
    int y;
    int operazione;
    printf("inserisci un numero\n");
    scanf(" %d", &x);
    printf("inserisci un numero\n");
    scanf(" %d", &y);
    printf("che operazione vuoi fare?\n");
    printf("premere:\n 1 per la somma\n 2 per la differenza\n 3 per la moltiplicazione\n 4 per la divisione\n");
    scanf(" %d", &operazione);
    if(operazione == 1)
    {
        somma(x, y);
    }
    if(operazione == 2)
    {
        differenza(x, y);
    }
    if(operazione ==3)
    {
        moltiplicazione(x, y);
    }
    if(operazione == 4)
    {
        divisione(x, y);
    }
    }
