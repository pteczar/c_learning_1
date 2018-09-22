#include <stdio.h>

/* matrix M[r][c] transposed into matrix N[c][r]

write a function transposeMatrix() that takes an argument a 4x5 matrix and a 5x4 matrix. 
function should transpose 4x5 matrix and store it in 5x4 matrix

wirte a main test for that




*/
// does not work I will need to get back to the case and repair the program
int transposeMatrix (int M[10][10])
{
    int i ; 
    int j ; 
    int c;
    int r;
    int N[c][r]; // transpose matrix
  


for (i = 0; i <= r; i++) // transpose the matrix
    { for (j = 0; j < c ; j++)
        {
             N[j][i] = M[i][j];
        }

for (i = 0; i < c ; i++)
    for(j = 0; j < r; j++)

printf("%d\t", N[j][i]);

if( j = r -1)
printf("\n\n");

}


}

int main(int argc, char const *argv[])
{
   int transposeMatrix (int M[10][10]);
    int r, c;

  double M[4][5] = 
    {        
    {1, 2, 3, 4, 5 },
    {6, 7, 8, 9, 10},
    {11, 12 ,13, 14, 15},
    {16, 17, 18, 19, 20}
    };


    printf("%d", transposeMatrix(M[4][5]));
    return 0;
}
