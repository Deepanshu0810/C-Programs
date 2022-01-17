#include<stdio.h>
int main(){
    int n;
    int i=2;
    int flow=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for ( i ; i < n; i++)
    {
        if (n%i==0)
        {
            printf("The number is not prime");
            flow=0;
            break;
        }
    }
    if (flow==1)
    {
        printf("The number is prime");
    }
    
    
    return 0;
}