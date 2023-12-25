#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[10][10],b[10][10],sum[10][10];
    printf("enter the number of rows(between 1 to 10)");
    scanf("%d",&r);
    printf("enter the number of columns(between 1 to 10)");
    scanf("%d",&c);
    printf("enter elements of first matrix");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("enter element a%d%d",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
     printf("enter elements of second matrix");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("enter element a%d%d",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
    printf("sum of two matrices is\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("%d\t",sum[i][j]);
    }
        printf("\n");
    }
    
    
    return 0;
}