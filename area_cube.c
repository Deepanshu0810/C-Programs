#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter the length of the side of cube:");
    scanf("%f",&a);
    printf("The curved surface area of cube is : %f unit square\n",4*pow(a,2));
    printf("The total surface area of cube is : %f unit square\n",6*pow(a,2));
    printf("The volume of the cube is : %f unit cube\n",pow(a,3));
    return 0;
}