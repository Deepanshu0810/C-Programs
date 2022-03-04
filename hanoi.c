#include<stdio.h>

void hanoi(int n, char from_t, char to_t, char aux_t)
{
    if (n==1)
    {
        printf("\nTransfer Disk 1 from %c to %c",from_t,to_t);
        return;
    }
    hanoi(n-1,from_t,aux_t,to_t);
    printf("\nTransfer Disk %d from %c to %c",n,from_t,to_t);
    hanoi(n-1,aux_t,to_t,from_t);
}

int main()
{
    int n;
    char a='A',b='B',c='C';
    printf("There are thre towers A, B and C\n");
    printf("We need to transfer disks from Tower A to C\n");
    printf("Enter the number of disks present :");
    scanf("%d",&n);
    hanoi(n,a,c,b);
    return 0;
}