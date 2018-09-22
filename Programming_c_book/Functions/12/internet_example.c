#include <stdio.h>

static void MatrixTranspose(int r, int c, int src[r][c], int dst[c][r])
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            dst[j][i] = src[i][j];
}

int main(void)
{
    int x[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };
    int y[2][3];

    MatrixTranspose(3, 2, x, y);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("X[%d][%d]=%d  ", i, j, x[i][j]);
            printf("Y[%d][%d]=%d\n", j, i, y[j][i]);
        }
    }

    return 0;
}