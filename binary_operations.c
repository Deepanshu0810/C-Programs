#include<stdio.h>
#include<stdlib.h>

void add(int a,int b)
{
    int sum[100],i=0,rem=0;
    while (a!=0 || b!=0)
    {
        sum[i]=(a%10 + b%10 + rem)%2;
        rem=(a%10 + b%10 + rem)/2;
        a=a/10;
        b=b/10;
        i++;
    }
    if (rem!=0)
    {
        sum[i]=rem;
    }
    while (i>=0)
    {
        printf("%d",sum[i]);
        i--;
    }
}

void sub(int a, int b)
{
    int i=0,sub[100];
    
    while (a!=0 || b!=0)
    {
        sub[i]=abs(a%10 - b%10);
        a=a/10;
        b=b/10;
        i++;
    }
    i--;
    while (i>=0)
    {
        printf("%d",sub[i]);
        i--;
    }
}

void mul(int a,int b)
{
    int factor=1;
    while(b!=0)
    {
        int digit=b%10;
        if (digit==1)
        {
            a=a*factor;

        }
        
    }
}

int binaryproduct(int a, int b)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (a != 0 || b != 0)
    {
        sum[i++] =(a % 10 + b % 10 + remainder) % 2;
        remainder =(a % 10 + b % 10 + remainder) / 2;
        a = a / 10;
        b = b / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}

int main()
{
    long n1,n2;
    int digit,factor=1,multiply=0;
    printf("Enter the first binary number :");
    scanf("%ld",&n1);
    printf("Enter the second binary number :");
    scanf("%ld",&n2);
    printf("\n********\n");
    printf("\nADDITION\n");

    add(n1,n2);

    printf("\n********\n");
    printf("\nSUBTRACTION\n");
    
    sub(n1,n2);

    printf("\n********\n");
    printf("\nMULTIPLICATION\n");
    while (n2 != 0)
    {
        digit =  n2 % 10;
        if (digit == 1)
        {
            n1 = n1 * factor;
            multiply = binaryproduct(n1, multiply);
        }
        else
            n1 = n1 * factor;
        n2 = n2 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %ld", multiply);

    return 0;
}