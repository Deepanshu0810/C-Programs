#include<stdio.h>

int main(){
    float sum=0;
    int i;
    printf("Enter the marks of the following subjects :\n");
    for (i = 1; i < 6; i++)
    {
        float temp;
        printf("Subject %d :",i);
        scanf("%f",&temp);
        sum+=temp;
    }
    printf("The sum of the marks is &f and the percentage is %f",sum,sum/5);
    
    return 0;
}