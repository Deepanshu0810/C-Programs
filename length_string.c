#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i=0,size=0;
    printf("Enter a string :");
    gets(str);
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("The size of the string is :%d\n\n",size);
    return 0;
}