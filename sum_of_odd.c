#include<stdio.h>

int main()
{
    int sum=0;
    int count=0;
    int i=1;
    while(count<25)
    {
        if (i%2 != 0)
        {
            sum+=i;
            count++;
        }
        i++;
    }
    printf("The sum of first 25 odd numbers is : %d",sum);
    return 0;
}