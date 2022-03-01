#include<stdio.h>

int factorial(int a)
{
    if (a>1)
    {
        return a*factorial(a-1);
    }
    else if (a==1)
    {
        return 1;
    }
    
    
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}