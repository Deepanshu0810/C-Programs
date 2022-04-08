#include<stdio.h>

int main()
{
    int n,arr[50],i=0,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    i-=1;
        
    while (i>=0)
    {
        if (arr[i]==0)
        {
            printf("zero\t");
        }
        else if (arr[i]==1)
        {
            printf("one\t");
            
        }
        else if (arr[i]==2)
        {
            printf("two\t");
        }
        else if (arr[i]==3)
        {
            printf("three\t");
        }
        else if (arr[i]==4)
        {
            printf("four\t");
        }
        else if (arr[i]==5)
        {
            printf("five\t");
        }
        else if (arr[i]==6)
        {
            printf("six\t");
        }
        else if (arr[i]==7)
        {
            printf("seven\t");
        }
        else if (arr[i]==8)
        {
            printf("eight\t");
        }
        else if (arr[i]==9)
        {
            printf("nine\t");
        }
        
        i--;
    }
    return 0;
}