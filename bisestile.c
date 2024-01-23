#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci un anno\n");
    scanf(" %d", &anno);
    if(anno % 400 == 0)
    
    if(anno % 4 == 0)
    {
        if(anno % 100 != 0)
            printf("è bisestile\n");
        else
        {
            printf("non è bisestile\n");
        }
    }
    else 
    {
        printf("non è bisestile\n");
    }
}