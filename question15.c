#include <stdio.h> 
const int max = 10; 
int diagonal_sum(int m, int n, int matrix[][max]) 
{ 
    int i, j, a = 0, sum = 0; 
    if (m == n) { 
        printf("The matrix is \n"); 
        for (i = 0; i < m; ++i) { 
            for (j = 0; j < n; ++j) { 
                printf(" %d", matrix[i][j]); 
            } 
            printf("\n"); 
        } 
        for (i = 0; i < m; ++i) { 
            
            // calculating the main diagonal sum 
            sum = sum + matrix[i][i]; 
            
            // calculating the off diagonal sum 
            a = a + matrix[i][m - i - 1]; 
        } 
        printf("\nMain diagonal elements sum is = %d\n", sum); 
        printf("Off-diagonal elements sum is = %d\n", a); 
    } 
    else
        printf("not a square matrix\n"); 
} 
  
int main() 
{ 
  
    int m = 3, n = 3; 
    int matrix[][10] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    
    diagonal_sum(m, n, matrix); 
  
    return 0; 
}