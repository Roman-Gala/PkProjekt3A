#include <stdio.h>
#include <stdlib.h>

void czytaj_kolumnami(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &a[j][i]);
    }
}

void pisz_wierszami(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
