#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter string in lower case :\n");
    gets(str);
    for ( i = 0; i < strlen(str); i++)
    {
        if (str[i]>= 97 && str[i]<=122)
        {
            str[i]-=32;
        }
        
    }
    printf("\nstring after conversion from lowercase to UPPERCASE\n");
    puts(str);
    return 0;
}