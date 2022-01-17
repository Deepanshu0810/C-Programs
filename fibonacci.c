#include<stdio.h>
int main()
{
    int a,b,n;
    int i=1;
    printf("Enter the first term :");
    scanf("%d",&a);
    printf("Enter the second term :");
    scanf("%d",&b);
    printf("Enter number of terms :");
    scanf("%d",&n);
    printf("%d terms of the given fibonacci are :\n");
    for ( i ; i < n+1; i++)
    {
        printf("%d\n",a);
        int c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}