#include<stdio.h>

int main()
{
    int matrix1[100][100],matrix2[100][100];
    int i,j,r,c;
    printf("Enter the order of the matrix in the form (row,coloumn)\n");
    scanf("(%d,%d)",&r,&c);
    printf("Enter the matrix 1 of order %d,%d\n",r,c);
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }  
    }
    printf("Enter the matrix 2 of order %d,%d\n",r,c);
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }  
    }

    printf("matrix 1 - matrix 2 is :\n");
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            printf("%d ",matrix1[i][j]-matrix2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}