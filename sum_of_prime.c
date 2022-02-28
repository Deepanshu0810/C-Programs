#include<stdio.h>

int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i,sum=0;
    int arr[10];
    for (i= 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(prime(arr[i])==1)
        {
            sum+=arr[i];
        }
    }    
    printf("The sum of the prime elements in the array is %d",sum);
    return 0;
}