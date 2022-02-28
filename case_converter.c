#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter string in upper case :\n");
    gets(str);
    for ( i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i]<=90)
        {
            str[i]+=32;
        }
        
    }
    printf("\nThe string after conversion from UPPERCASE to lowercase");
    puts(str);
    
    return 0;
}