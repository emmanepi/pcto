#include <stdio.h>

void differenza1(int eta, int anno)
{
    printf("gli anni in più sono:" " %d\n", (eta - anno));
}
void differenza2(int eta, int anno)
{
    printf("gli anni in meno sono:" " %d\n", (anno - eta));
}

int main()
{
    int eta;
    int anno = 1969;
    printf("inserisci il tuo anno di nascita\n");
    scanf(" %d", &eta);
    if(eta == anno)
    {
        printf("sei nato lo stesso anno\n");
    }
    else if(eta > anno)
    {
        differenza1(eta, anno);
    }
    else if(eta < anno)
    {
        differenza2(eta, anno);
    }

}