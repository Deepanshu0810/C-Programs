#include<stdio.h>
#include<string.h>

int length(char arr[])
{
    int i=0;
    while (arr[i]!='\0')
    {
        i++;
    }
    return i ;
}

void copy(char *arr1, char *arr2)
{
    int i=0;
    for ( i = 0; i < length(arr1); i++)
    {
        arr2[i]=arr1[i];
    }
    arr2[i]='\0';
    
}

int main()
{
    char str1[100],str2[100],str3[100];
    int n,i,j=0;
    printf("Enter a string 1 : ");
    gets(str1);
    n=length(str1);
    printf("The length of the string is : %d\n",n);
    printf("\n****\t****\n");

    printf("Enter the string 2 to concatinate in string 1 : ");
    gets(str2);
    while (str2[j]!='\0')
    {
        str1[n]=str2[j];
        n++;
        j++;
    }
    str1[n]='\0';
    printf("String 1 after concatination is %s\n",str1);

    printf("\n****\t****\n");
    printf("The reverse of the string 1 is :\n");
    for ( i = 0; i < length(str1); i++)
    {
        printf("%c",str1[length(str1)-i-1]);
    }

    printf("\n\n****\t****\n");
    printf("Copying string 1 to string 3\n");
    copy(str1,str3);
    printf("String 3 is : %s ",str3);
    return 0;
}