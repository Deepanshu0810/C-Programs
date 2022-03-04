#include<stdio.h>

int main()
{
    int n;
    printf("Enter a three digit number :\n");
    scanf("%d",&n);
    if (n>=100 && n<=999)
    {
        if ( n%10 == n/100 )
        {
            printf("The number is plindrome\n");
        }
        else{
            printf("The number is not a palindrome\n");
        }
        
    }
    else{
        printf("The number entered is not three digit\n");
    }
    
    return 0;
}