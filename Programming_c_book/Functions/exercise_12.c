#include <stdio.h>

const int i = 4;
const int j = 5;
const int a = 4;
const int b = 5;

int main(int argc, char const *argv[])
{
    int transposeMatrix (int a, int b, int M[i][j], int N[j][i]);
    int matrixM[4][5] =  
{        
    {1, 2, 3, 4, 5 },
    {6, 7, 8, 9, 10},
    {11, 12 ,13, 14, 15},
    {16, 17, 18, 19, 20}
};

    int matrixN[5][4];
    transposeMatrix(a,b,matrixM,matrixN);

    return 0;
}

int transposeMatrix (int a, int b, int M[i][j], int N[j][i])
{
    int i, j; // this does not matter as i & j starts in below loops from 0
  

    for (i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
              N[j][i] = M[i][j];  
            }
        }
        printf("Transpose of the matrix:\n");

    for (i = 0; i < b; i++)
        {
            for(j = 0; j < a; j++)
            {
                printf("%d\t",N[i][j]);  
               
                
            }
                printf("\n");
        }   

    
}