#include<stdio.h>

int main()
{
    int matrix1[100][100],matrix2[100][100],product[100][100];
    int i,j,k,m,n,p,q;
    printf("Enter the order of the matrix 1 in the form (row,coloumn)\n");
    scanf("%d,%d",&m,&n);
    printf("Enter the order of the matrix 2 in the form (row,coloumn)\n");
    scanf("%d,%d",&p,&q);
    printf("Enter the matrix 1 of order %d,%d\n",m,n);
    for(i=0;i<m;i++){
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }  
    }
    printf("Enter the matrix 2 of order %d,%d\n",p,q);
    for(i=0;i<p;i++){
        for ( j = 0; j < q; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }  
    }
    if (n==p)
    {
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                product[i][j]=0;
                for(k=0;k<n;k++){
                    product[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }

    }
    
    printf("The product of the two matrices is :\n");
    for(i=0;i<m;i++){
        for ( j = 0; j < q; j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}