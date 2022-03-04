#include<stdio.h>

int main()
{
    int ch;
    int i,j;
    printf("\nPress 1 to print pattern 1\n");
    printf("\nPress 2 to print pattern 2\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < i+1; j++)
            {
                printf(" *");
            }
            printf("\n");
            
        }
        break;

    case 2:
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
        break;

    default:
        printf("\nYou entered wrong choice\n");
        break;
    }
    
    return 0;
}