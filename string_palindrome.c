#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,n;
    int ans=1;
    printf("Enter a word :");
    gets(str);
    n=strlen(str);
    for ( i = 0; i < n/2; i++)
    {
        if (str[i]!=str[n-i-1])
        {
            ans=0;
            break;
        }
    }
    if (ans==1)
    {
        printf("\nThe given string is palindrome\n");
    }
    else
    {
        printf("\nThe given string is not palindrome\n");
    }
    
    return 0;
}