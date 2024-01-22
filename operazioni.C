#include <stdio.h>

int main()
{
    int nemo = 9;
    int dori = 7;
    int martin = dori + nemo;
    printf("nemo: %d dori: %d martin: %d", nemo, dori, martin);

    int pippo = 17;
    int pluto = 10;
    int paperino = pippo - pluto;
    printf("pippo: %d pluto: %d paperino: %d", pippo, pluto, paperino);

    int x;
    printf("x: %d", x);

    int qui = 3;
    int quo = 3;
    int qua = qui * quo;
    printf("qui: %d quo: %d qua: %d", qui, quo, qua);

    int a = 36;
    int b = 6;
    int c = a / b;
    printf("a: %d b: %d c: %d", a, b, c);

    int emma = 5;
    int giulia = 2;
    int irene = emma % giulia;
    printf("emma: %d giulia: %d irene: %d", emma, giulia, irene);

    int e = 65;
    int f = 54;
    int g = 90;
    int h = e * f - g;
    printf("e: %d f: %d g: %d h: %d", e, f, g, h);
    
    int n1= 9;
    int n2 = 6;
    float n3 = ((float)n1) / n2;
    printf("n1: %d n2: %d n3: %f", n1, n2, n3);
}
