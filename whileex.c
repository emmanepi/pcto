#include <stdio.h>

int main()
{
    char lettera;
    char a = 97;
    char e = 101;
    char i = 105;
    char o = 111;
    char u = 117;
    char A = 65;
    char E = 69;
    char I = 73;
    char O = 79;
    char U = 85;
    printf("inserisci una lettera\n");
    scanf(" %c", &lettera);
    
     if ((lettera > 65) && (lettera < 90) && (lettera > 97) && (lettera < 122))
        {
            printf("errore\n");
        }
    else if ((lettera != a) && (lettera != e) && (lettera != i) && (lettera != o) && (lettera != u) && (lettera != A) && (lettera != E) && (lettera != I) && (lettera != O) && (lettera != U))
            {
                printf("la lettera è una consonante\n");
            }
    else 
        {
            printf("la lettera è una vocale\n");
        }
       return(0);  
    }

    


