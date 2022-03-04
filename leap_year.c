#include<stdio.h>

int main()
{
    int d,m,y;
    printf("Enter the date in the format dd/mm/yy\n");
    scanf("%d/%d/%d",&d,&m,&y);
    if (y%100 == 0)
    {
        if (y%400 == 0)
        {
            printf("The year is leap year");
        }
        else
        {
            printf("The year is not a leap year");
        }
    }
    else
    {
        if (y%4 == 0)
        {
            printf("The year is lepa year");
        }
        else
        {
            printf("the year is not a leap year");
        }
    }
    return 0;
}