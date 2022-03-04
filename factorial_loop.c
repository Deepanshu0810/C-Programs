#include<stdio.h>

int main()
{
    int n;
    int fact=1;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n==0 || n==1)
    {
        printf("\nThe factorial of %d is 1\n",n);
    }
    else
    {
        while(n>0){
            fact*=n;
            n--;
        }
        printf("\nThe factorial of %d is %d\n",n,fact);   
    }

    
    return 0;
}