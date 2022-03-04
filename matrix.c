#include<stdio.h>
int i,j,r,c;
int matrix1[100][100],matrix2[100][100];


int matrix()
{
    int matrix[100][100];
    printf("Enter the order of the matrix in the form (row,coloumn)\n");
    scanf("(%d,%d)",&r,&c);
    printf("Enter the matrix of order %d,%d\n",r,c);
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }  
    }
    return &matrix;
}
void add(int arr1[][100],int arr2[][100],int m,int n)
{
    printf("The sum of the two matrix is :\n");
    for(i=0;i<m;i++){
        for ( j = 0; j < n; j++)
        {
            printf("%d ",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int ch,n,ans=1;
    
    printf("How many matrices do you want to enter 1 or 2\n");
    scanf("%d",&n);

    while (ans==1)
    {
        printf("\nPress 1 to Add two matrix");
        printf("\nPress 1 to Subtract two matrix");
        printf("\nPress 1 to Find upper or lower triangular matrix");
        printf("\nPress 1 to Find transpose a matrix");
        printf("\nPress 1 to Multiply two matrix\n");
        scanf("%d",&ch);
        if (ch==1)
        {
            if (n==2)
            {
                add(matrix1,matrix2,r,c);
                break;
            }
            
        }
        else if (ch==2)
        {
            /* code */
            break;
        }
        else if (ch==3)
        {
            /* code */
            break;
        }
        else if (ch==4)
        {
            /* code */
            break;
        }
        else if (ch==5)
        {
            /* code */
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