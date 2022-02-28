#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    
    srand(time(0));
    printf("two random numbers between 1 to 100 are :\n");
    for ( i = 0; i < 2; i++)
    {
        int num=rand() % 100 +1;
        printf("%d\n",num);
    }
    
    return 0;
}