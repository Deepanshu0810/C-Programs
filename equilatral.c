#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter the side of the equilateral trinagle :");
    scanf("%f",&a);
    float area = (sqrt(3)*pow(a,2))/4;
    printf("The area of the triangle is %.2f",area); 
    return 0;
}