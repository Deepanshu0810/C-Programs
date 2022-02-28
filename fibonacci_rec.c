#include<stdio.h>

void fibonacci(int a,int b,int n)
{
    if (n>0)
    {
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
        --n;
        fibonacci(a,b,n);
    }
    
    
}

int main()
{
    int a,b,n;
    printf("Enter the first number of the series :");
    scanf("%d",&a);
    printf("Enter the second number of the series :");
    scanf("%d",&b);
    printf("Enter the number of elements required :");
    scanf("%d",&n);
    fibonacci(a,b,n);
    return 0;
}