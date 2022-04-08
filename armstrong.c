#include<stdio.h>

int main()
{
    int n,temp;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        int digit = n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }

    if (sum==temp)
    {
        printf("\nIt is an Armstrong Number\n");
    }
    else
    {
        printf("\nIt is not an Armstrong Number");
    }
    
    return 0;
}