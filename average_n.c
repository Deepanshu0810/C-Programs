#include<stdio.h>

int main()
{
    int arr[100],n,i;
    float sum=0;
    printf("How many numbers do you want to enter :");
    scanf("%d",&n);
    printf("Enter the numbers :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n The average of %d numbers is :",n);
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("%.2f",sum/n);
    
    return 0;
}