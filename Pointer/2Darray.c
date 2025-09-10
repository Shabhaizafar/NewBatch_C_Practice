#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row = 3, col = 3;

    int **arr;
    arr = (int **)malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    int z = 11;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = z++;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\t%d",*(*(arr+i)+j));
        }
        printf("\n");
    }
}
