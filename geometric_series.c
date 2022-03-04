#include<stdio.h>
#include<math.h>

int main()
{
    int a,r,n;
    int i;
    int sum=0;
    printf("The sum of geometric series\n");
    printf("A + AR + AR^2 + ... + AR^(n-1)\n");
    printf("Enter the first term 'A' :");
    scanf("%d",&a);
    printf("Enter the common ratio 'R' :");
    scanf("%d",&r);
    printf("Enter the value of 'n' :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=a*pow(r,i-1);
    }
    printf("The sum of the gemetric series is %d",sum);
    return 0;
}