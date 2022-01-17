#include<stdio.h>
int main(){
    int n;
    int rev=0;
    int temp=n;
    printf("Enter a number :");
    scanf("%d",&n);
    while (temp!=0)
    {
        int digit = temp%10;
        rev=rev*10 + digit;
        temp=temp/10;
    }
    if (rev==n)
    {
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    
    
    return 0;

}