#include<stdio.h>
int main(){
    int n;
    int rev=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n!=0)
    {
        int digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }
    printf("The reverse of the number is : %d",rev);
    return 0;
}