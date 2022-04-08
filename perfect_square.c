#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    int ans=0;
    printf("Enter a four digit number to check : ");
    scanf("%d",&n);
    int last=n%100;
    int first=n/100;
    if (n>=1000 && n<=9999)
    {
        for ( i = 0; i < first; i++)
        {
            if (first==i*i)
            {
                printf("\nThe number formed with first two digits is perfect square\n");
                ans=1;
                break;
            }
            
        }
        if (ans==0)
        {
            printf("\nThe number formed with first two digits is not a perfect square\n");
            
        }
        ans=0;
        for ( i = 0; i < last; i++)
        {
            if (last==i*i)
            {
                printf("\nThe number formed with last two digits is perfect square\n");
                ans=1;
                break;
            }
            
        }
        if (ans==0)
        {
            printf("\nThe number formed with last two digits is not a perfect square\n");  
        }
        
        int root = (int)sqrt(n);
        if (n==root*root)
        {
            printf("\nThe number is a four digit perfect square\n");
        }
        else
        {
            printf("\nThe number is not a four digit perfect square\n");
        }
    }
    else
    {
        printf("\nThe number entered is not a four digit number\n");
    }
    
}