#include<stdio.h>

int main()
{
    int arr[100];
    int i,n;
    printf("How many numbers do you want to enter :");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d is at index %d\n",arr[i],i);
    }
    
    
    return 0;
}