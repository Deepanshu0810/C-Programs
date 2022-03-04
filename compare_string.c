#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i=0;
    int ans=1;
    printf("Enter first string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    while (str1[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            ans=0;
            break;
        }
        i++;
    }
    if (ans==1)
    {
        printf("\nTwo strings are equal\n");
    }
    else{
        printf("\nTwo strings are unequal\n");
    }
    
    
    return 0;
}