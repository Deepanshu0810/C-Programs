#include<stdio.h>

int main(){
    float c;
    printf("Enter the temperature in degree celsius:");
    scanf("%f",&c);
    float f=(9*c)/5 + 32;
    printf("The temperature in degree fahrenhite is :%f",f);
    return 0;
}