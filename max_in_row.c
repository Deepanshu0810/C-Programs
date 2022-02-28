#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j;
    int arr[6][5];
    for ( i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<6;i++)
    {
        int max=INT_MIN;
        for(j=0;j<5;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("The maximum of row %d is %d \n",i+1,max);
    }
    
    return 0;
}