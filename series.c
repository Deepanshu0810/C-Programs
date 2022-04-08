#include<stdio.h>

float fact(int a)
{
    int fact=1;
    while (a>0)
    {
        fact*=a;
        a--;
    }
    return fact;
}

int power(int a,int b)
{
    int res=1;
    while (b>0)
    {
        res*=a;
        b--;
    }
    return res;   
}

int main()
{
    printf("The series is :\n");
    printf("x + x^2/2! + x^3/3! + ...\n");
    int x=1;
    float sum=0;
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum+=power(x,i)/fact(i);
    }
    printf("The sum of the series is : %f",sum);
    return 0;
}