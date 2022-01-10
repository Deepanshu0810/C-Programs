#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("Enter three sides of the triangle :\n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b <= c) || (a+c <= b) || (b+c <=a)){
        printf("The triangle entered is invalid");
    }
    else{
        float s=(a+b+c)/2;
        float area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is %f unit square",area);
    }
    return 0;
}