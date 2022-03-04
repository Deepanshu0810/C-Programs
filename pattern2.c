#include<stdio.h>

int main()
{
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        int n=1;
        for ( j = 0; j < 4-i-1; j++)
        {
            printf("  ");
        }
        for ( j; j < 4; j++)
        {
            printf("%d ",n);
            n++;
        }
        n-=2;
        for ( j; j<4+i; j++)
        {
            printf("%d ",n);
            n--;
        }
        printf("\n");
        
        
    }
    
    return 0;
}