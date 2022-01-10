#include<stdio.h>

int main(){
    float sal,da,hra;
    printf("Enter the basic salary :");
    scanf("%f",&sal);
    da=0.4*sal;
    hra=0.2*sal;
    printf("The dearness allowance is %f\n",da);
    printf("The house rent allowance is %f\n",hra);
    printf("The gross salary is %f\n",sal+da+hra);
    return 0;
}