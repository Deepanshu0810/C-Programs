#include<stdio.h>

int main(){
    float sal,ta,hra;
    printf("Enter the basic salary :");
    scanf("%f",&sal);
    ta=0.1*sal;
    hra=0.3*sal;
    printf("The travelling allowance is %f\n",ta);
    printf("The house rent allowance is %f\n",hra);
    printf("The gross salary is %f\n",sal+ta+hra);
    printf("\n");
    return 0;
}