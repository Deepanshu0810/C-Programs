#include<stdio.h>
#include<math.h>
int main()
{
    int bin;
    int hexa=0;
    int i=0;
    printf("Enter a binary number :");
    scanf("%d",&bin);
    int temp=bin;
    while (temp!=0)
    {
        int unit=temp%10;
        hexa+=unit*pow(2,i);
        temp=temp/10;
        i+=1;
    }

    printf("%d in decimal is %d",bin,hexa);
    
    return 0;
}