#include<stdio.h>
int main(){
    int n,i;
    float sum=0;
    printf("How many numbers do you want to enter :");
    scanf("%d",&n);
    printf("\nEnter the numbers\n");
    for ( i = 0; i < n; i++)
    {
        int temp;
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("\nThe average of the numbers is :%.2f",sum/n);
    
}