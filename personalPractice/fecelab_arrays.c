#include<stdio.h>
/* int printMatrix(int matrix[3][3]);
int findsum (int matrix[3][3]);*/

int main(){
    int matrix[3][3];
    int sumMatrix;

    printf("Enter your values for a 3 x 3 matrix\n");
    for(int i = 0; i < 3; i ++){//i represents the index of the first array
        for(int j = 0; j < 3; j++){// j represents the index of the seccond array.
            printf("Element [%d][%d] :",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYoure matrix is:\n");
   // printMatrix(matrix);



return 0;
}
