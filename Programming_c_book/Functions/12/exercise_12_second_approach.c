#include <stdio.h>

int matrixM[4][5] =  
{        
    {1, 2, 3, 4, 5 },
    {6, 7, 8, 9, 10},
    {11, 12 ,13, 14, 15},
    {16, 17, 18, 19, 20}
};
 int matrixN[5][4];

int i, j, r, c;

int transposeMatrix (int r, int c, int src[r][c], int dst[c][r])
{
   
    
for (i = 0; i <= r; i++) // transpose the matrix
    { for (j = 0; j < c ; j++)
        {
             dst[j][i] = src[i][j];
        }

/*for (i = 0; i < c ; i++)
    for(j = 0; j < r; j++)

printf("%d\t", matrixN[j][i]);

if( j = r -1)
printf("\n\n"); */

}


}

int main(int argc, char const *argv[])
{
    transposeMatrix(5,4,matrixM,matrixN);

     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("X[%d][%d]=%d  ", i, j, matrixM[i][j]);
            printf("Y[%d][%d]=%d\n", j, i, matrixN[j][i]);
        }
    }

    return 0;
}
