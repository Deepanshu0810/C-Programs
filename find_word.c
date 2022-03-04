#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char word[50];
    int i,j;
    int ans=0;
    printf("Enter the sentence :");
    gets(str);
    printf("Enter the word to find :");
    gets(word);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==word[0] && str[i-1]==' ')
        {
            ans=1;
            for ( j = 1;word[j]!='\0'; j++)
            {
                if (str[i+j]!=word[j])
                {
                    ans=0;
                    break;
                }   
            }
        }
        if (ans==1)
        {
            break;
        }
    }
    if (ans==0)
    {
        printf("\nThe word is not found\n");
    }
    else
    {
        printf("\nThe string is found at position %d",i+1);
    }
    
    
    return 0;
}