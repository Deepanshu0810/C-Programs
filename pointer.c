#include<stdio.h>

int main()
{
    int n,*p1,**p2;
    n=10;
    p1=&n;
    p2=&p1;
    printf("The address of variable is : %d\n",&n);
    printf("The address of pointer p1 is : %d\n",&p1);
    printf("The address of pointer p2 is : %d\n",&p2);
    printf("The value stored in pointer p1 is :%d\n",p1);
    printf("The value stored in pointer p2 is :%d\n",p2);
    return 0;
}