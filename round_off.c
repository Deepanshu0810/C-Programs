#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the number to round off to its nearest multiple : ");
    scanf("%d",&n2);
    int rem=n1%n2;
    int new_num = n1 + (n2-rem);
    printf("\nThe nearest largest multiple of %d is %d\n",n2,new_num);
    return 0;
}