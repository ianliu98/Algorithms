#include <stdio.h>

/* matrix multiplication Aiq * Bqj --> P235 */

int matrix1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
int matrix2[2][3] = {{7, 8, 9}, {10, 11, 12}};
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
				multiplied_matrix[m][n] = multiplied_matrix[m][n] + matrix1[m][k]*matrix2[k][n];
			printf("%d\t",multiplied_matrix[m][n]);
		}
		printf("\n");
	}

	return 0;
}
