#include<stdio.h>

int main()
{
    int mat[100][100];
    int m,n,i,j;
    int max,min;
    printf("Enter the order of the matrix (m,n) :");
    scanf("%d,%d",&m,&n);
    printf("Enter the elements of the matrix\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    max=mat[0][0];
    min=mat[0][0];
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] > max)
            {
                max=mat[i][j];
            }
            if (mat[i][j] < min)
            {
                min=mat[i][j];
            }   
        }
    }
    
    printf("\nThe maximum element of the matrix is : %d",max);
    printf("\nThe minimum element of the matrix is : %d",min);

    
    return 0;
}