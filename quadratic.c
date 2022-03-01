#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    float d;
    printf("ax^2 + bx + c");
    printf("\nEnter the value of a,b and c for the above equation :\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==0)
    {
        printf("The entered quadratic equation is invalid");
    }
    else{
        d=(b*b - 4*a*c);
        if (d<0)
        {
            printf("Roots are imagenary\n");
            float realroot1=(-1*b)/(2*a);
            float imgroot1=(sqrt(abs(d)))/(2*a);
            float imgroot2=(sqrt(abs(d)))/(2*a);
            printf("root 1= %f+i%f\n",realroot1,imgroot1);
            printf("root 2= %f-i%f\n",realroot1,imgroot2);
        }
        else 
        {
            printf("Roots are real\n");
            float root1=((-1*b)+d)/(2*a);
            float root2=((-1*b)-d)/(2*a);
            printf("root 1= %f\n",root1);
            printf("root 2= %f\n",root2);

        }

    }
    
    return 0;
}