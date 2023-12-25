//program to print multiplication of two matrices
#include<stdio.h>
int main(){
    int a[100][100],b[100][100],mul[100][100],r,c,i,j,k;
    printf("enter number of row(1 to 10)");
    scanf("%d",&r);
     printf("enter number of cloumn(1 to 10)");
    scanf("%d",&c);
    printf("enter elements of first matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter elements of second matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("matrix multiplication is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mul[i][j]);

        }
        printf("\n");
    }
    return 0;
}