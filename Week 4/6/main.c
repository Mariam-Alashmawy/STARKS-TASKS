#include <stdio.h>
#include <stdlib.h>
#define max 50
int main()
{
    int rows1, cols1, rows2, cols2;
    int matrix1[max][max], matrix2[max][max], result[max][max];
    int i,j,k;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
    }
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) {
        printf("Multiplication is not possible.\n");
    }
    else{
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows2; i++)
        {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    }
    printf("\n");
    for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                result[i][j] = 0;
                for (k = 0; k < rows2; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
