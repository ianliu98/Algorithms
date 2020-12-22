#include <stdio.h>

/* Boolean product of zero-one matrices (A, B: zero-one matrices) --> P236 */

int matrix1[3][2] = {{1, 0}, {0, 1}, {1, 0}};
int matrix2[2][3] = {{1, 1, 1}, {0, 1, 0}};
int i=3, j=3, q=2;

int main()
{
        int m, n, k;
        int multiplied_matrix[i][j];

        for (m=0; m<i; ++m)
        {
                for (n=0; n<j; ++n)
                {
                        multiplied_matrix[m][n] = 0;
                        for (k=0; k<q; ++k)
                                multiplied_matrix[m][n] = multiplied_matrix[m][n] || (matrix1[m][k] && matrix2[k][n]);
                        printf("%d\t",multiplied_matrix[m][n]);
                }
                printf("\n");
        }

        return 0;
}

