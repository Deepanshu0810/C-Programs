#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    char i;
    printf("Enter a string in STRING 1 :");
    gets(str1);
    for (i = 0; i < sizeof(str1); i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("After copying content of STRING 1 to STRING 2\n");
    printf("STRING 2 = %s",str2);

    return 0;
}