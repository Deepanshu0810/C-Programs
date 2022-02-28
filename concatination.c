#include <stdio.h>  
void concatinate(char *s1,char *s2)
{
    int length=0;
    while(s1[length] != '\0')
    {
        length++;
    }
    int i=0;
    while(s2[i] != '\0')
    {
        s1[length]=s2[i];
        i++;
        length++;
    }
    s1[length]='\0';
}

int main()  
{  
    char first_string[100]; 
    char second_string[100];    
    printf("Enter the first string :");  
    gets(first_string);
    printf("\nEnter the second string :");  
    gets(second_string);
    concatinate(first_string,second_string); 
    printf("%s",first_string);
    
}