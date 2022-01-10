#include<stdio.h>
#include<math.h>

int main(){
    float r;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    float area = M_PI*pow(r,2);
    printf("The area of the given circle is %f unit square",area);
    return 0;
}