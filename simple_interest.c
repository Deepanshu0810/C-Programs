#include<stdio.h>

int main(){

    float p,r,t;
    printf("Enter the principle amount :");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time period:");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    printf("The simple interest is %f",si);

    return 0;
}