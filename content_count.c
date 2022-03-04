#include<stdio.h>

int main()
{
    FILE *fh;
    char ch,file_name[50];
    int s_count=0,l_count=0,u_count=0,n_count=0;
    printf("Enter file name : ");
    scanf("%s",&file_name);
    fh=fopen(file_name,"r");
    if (fh==NULL)
    {
        printf("\nError Opening the file\n");
    }
    ch=fgetc(fh);
    while (ch!=EOF)
    { 
        if ((ch>=32 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126))
        {
            s_count++;
        }
        else if (ch>=97 && ch<=122)
        {
            l_count++;
        }
        else if (ch>=65 && ch<=90)
        {
            u_count++;
        }
        else if (ch>=48 && ch<=57)
        {
            n_count++;
        }
        ch=fgetc(fh);
        
        
    }
    printf("\nThe number of lowercase letters is : %d\n",l_count);
    printf("\nThe number of uppercase letters is : %d\n",u_count);
    printf("\nThe number of special characters is : %d\n",s_count);
    printf("\nThe number of digits is : %d\n",n_count);
    
}