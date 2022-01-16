#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"

int main(int argc, char *argv[])
{
    int w, k, c=0,d=0;
    double x;
    printf("Ile wierszy: ");
    scanf("%d", &w);
    printf("Ile kolumn: ");
    scanf("%d", &k);
    printf("X: ");
    scanf("%lf", &x);
    int tab[w][k];
    czytaj_kolumnami(w, k, tab);
    printf("\nTablica:\n\n");
    pisz_wierszami(w, k, tab);
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (tab[i][j] > x)
            {
                d++;
            }
        }
    }
    int wynik[d][2];
    printf("\nWektor wynik: [ ");
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (tab[i][j] > x)
            {
                wynik[c][0] = i;
                wynik[c][1] = j;
                c++;
            }
        }
    }
    for (int i=0; i<c; i++){
        printf("[w:%d, k:%d], ", wynik[i][0], wynik[i][1]);
    }
    printf("]");
    

    return 0;
}