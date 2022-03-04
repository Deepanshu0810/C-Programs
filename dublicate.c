#include<stdio.h>

int main()
{
    int arr[100];
    int i,j,n;
    printf("How many elements do you want to enter :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray after replacing the duplicate elements with 'A'\n");
    for ( i = 0; i < n; i++)
    {
        int dup=0;
        for ( j = i+1; j < n; j++)
        {
            if (j<n)
            {
                if (arr[i]==arr[j])
                {
                    dup=1;
                    arr[i]='A';
                    printf("%c\t",arr[i]);
                    break;
                }
            }
        }
        if (dup==0)
        {
            printf("%d\t",arr[i]);
        }
    } 
    return 0;
}