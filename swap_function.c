#include<stdio.h>

void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nA after swapping is : %d",a);
    printf("\nB after swapping is : %d",b);
}

int main()
{
    int a,b;
    printf("Enter first number A : ");
    scanf("%d",&a);
    printf("Enter second number B : ");
    scanf("%d",&b);

    swap(a,b);

    return 0;
}