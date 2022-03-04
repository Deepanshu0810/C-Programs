#include<stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n1;
    int n2;
    printf("Enter first number N1:");
    scanf("%d",&n1);
    printf("Enter second number N2:");
    scanf("%d",&n2);
    swap(&n1,&n2);
    printf("N1 after swapping is : %d\n",n1);
    printf("N2 after swapping is : %d\n\n",n2);
}