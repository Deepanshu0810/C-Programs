#include<stdio.h>

void add(int arr1[][50],int arr2[][50],int m,int n)
{
    int i,j;
    printf("The sum of the two matrix is :\n");
    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            printf("%d ",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    
}

void sub(int arr1[][50],int arr2[][50],int m,int n)
{
    int i,j;
    printf("The difference of the two matrix is :\n");
    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            printf("%d ",arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
    
}

void lower(int arr1[][50],int m,int n)
{
    int i,j;
    int ans=1;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < i; j++)
        {

            if(arr1[i][j]!=0)
            {
                ans=0;
                break;
            }
        }
        if (ans==0)
        {
            printf("NO\n");
            break;
        }
    }
    if (ans==1)
    {
        printf("YES\n");
    }
}

void upper(int arr1[][50],int m,int n)
{
    int i,j;
    int ans=1;
    for ( i = 0; i < m; i++)
    {
        for ( j = i+1; j < n; j++)
        {

            if(arr1[i][j]!=0)
            {
                ans=0;
                break;
            }
        }
        if (ans==0)
        {
            printf("NO\n");
            break;
        }
    }
    if (ans==1)
    {
        printf("YES\n");
    }
}

void transpose(int arr1[][50],int m,int n)
{
    int i,j;
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < m; i++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}

void multiply(int arr1[][50],int arr2[][50],int m,int n,int r,int c)
{
    int product[m][c];
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            product[i][j]=0;
            for(k=0;k<n;k++)
            {
                product[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("The product of the two matrices is :\n");
    for(i=0;i<m;i++){
        for ( j = 0; j < c; j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matrix1[50][50],matrix2[50][50];
    int i,j,m,n,r,c;
    int ch,ans=1;
    printf("Enter the order of the matrix 1: ");
    scanf("%d,%d",&m,&n);
    printf("Enter the order of the matrix 2: ");
    scanf("%d,%d",&r,&c);
    printf("\nEnter the Matrix 1\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nEnter the Matrix 2\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    while (ans==1)
    {
        printf("\nPress 1 to Add two matrix");
        printf("\nPress 2 to Subtract two matrix");
        printf("\nPress 3 to Find upper or lower triangular matrix");
        printf("\nPress 4 to Find transpose a matrix");
        printf("\nPress 5 to Multiply two matrix");
        printf("\nPress 6 to Exit\n");
        scanf("%d",&ch);
        if (ch==1)
        {
            if (m==r && n==c)
            {
                add(matrix1,matrix2,m,n);
            }
            else
            {
                printf("\nCould not perform addition\n");
            }
            
        }
        else if (ch==2)
        {
            if (m==r && n==c)
            {   
                sub(matrix1,matrix2,m,n);
            }
            else
            {
                printf("\nCould not perform subtraction\n");

            }
            
        }
        else if (ch==3)
        {
            if(m==n)
            {
                printf("\nIS MATRIX 1 LOWER TRIANGLE\n");
                lower(matrix1,r,c);
                printf("\nIS MATRIX 1 UPPER TRIANGLE\n");
                upper(matrix1,r,c);
            }
            if (r==c)
            {
                printf("\nIS MATRIX 2 LOWER TRIANGLE\n");
                lower(matrix2,r,c);
                printf("\nIS MATRIX 2 UPPER TRIANGLE\n");
                upper(matrix2,r,c);
            }
            
            else
            {
                printf("the matrices are not square matrix");
            }
 
        }
        else if (ch==4)
        {
            printf("\nThe transpose of MATRIX 1 is\n");
            transpose(matrix1,m,n);
            printf("\nThe transpose of MATRIX 2 is\n");
            transpose(matrix2,r,c);
        }
        else if (ch==5)
        {
            if (n==r)
            {
                multiply(matrix1,matrix2,m,n,r,c);
            }
            else
            {
                printf("\nThe matrices can't be multiplied\n");
            }
            
        }
        else if (ch==6)
        {
            printf("Exiting.....");
            break;
        }
        
        else
        {
            printf("You entered wrong choice");
            continue;
        }
    }
    return 0;
}