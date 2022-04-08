#include<stdio.h>

int reverse(int a)
{
    int temp=0;
    while(a!=0)
    {
        int digit=a%10;
        temp=temp*10 + digit;
        a=a/10;
    }
    return temp;
}

int main()
{
    int n,rev;
    printf("Enter a number : ");
    scanf("%d",&n);
    rev=reverse(n);
    printf("The number after reversing is : %d\n",rev);

    if (n==rev)
    {
        printf("\nThe number is palindrome\n");
    }
    else
    {
        printf("\nThe number is not palindrome\n");
    }
    
    return 0;
}