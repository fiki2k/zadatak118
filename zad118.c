// Program treba naci sumu dijagonalnih elemenata na 2D matrici.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int sum = 0;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stuipaca: ");
        scanf("%d",&n);
        printf("\nUnesi elemente matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    /*
     Pronade sumu dijagonalnih elemenata.
     */
    for(i=0; i<m; i++)
    {
        sum = sum + A[i][i];
    }

    printf("\nSuma glavne dijagonale je = %d\n\n", sum);

    return 0;
}
