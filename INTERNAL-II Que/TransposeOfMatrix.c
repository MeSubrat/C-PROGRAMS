#include<stdio.h>  
int main(){  
    int row, col;  
    printf("Enter the number of rows: ");  
    scanf("%d", &row);  
    printf("Enter the number of columns: ");  
    scanf("%d", &col);  
    int matrix[row][col],transpose[row][col];  
    printf("Enter the elements of the matrix:\n");  
    for(int i=0; i<row; i++){  
        for(int j=0; j<col; j++){  
            scanf("%d", &matrix[i][j]);  
        }  
    } 
    printf("The matrix is: \n");
    for(int i=0; i<col; i++){  
        for(int j=0; j<row; j++){  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }   
    //CALCULATING TRANSPOSE
    for(int i=0; i<row; i++){  
        for(int j=0; j<col; j++){  
            // int temp = matrix[i][j];  
            // matrix[i][j] = matrix[j][i];  
            // matrix[j][i] = temp; 
            transpose[j][i]=matrix[i][j];
        }  
    }  
    printf("The transposed matrix is:\n");  
    for(int i=0; i<col; i++){  
        for(int j=0; j<row; j++){  
            printf("%d ", transpose[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  