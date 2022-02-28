#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,m,n;
    printf("Enter the order of the matrix in the form (row,coloumn)\n");
    scanf("%d,%d",&m,&n);
    printf("Enter the matrix of order %d,%d\n",m,n);
    for(i=0;i<m;i++){
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("The transpose the matrix is \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}