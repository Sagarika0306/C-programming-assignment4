#include<stdio.h>
void main()
{
    int n,i;
    printf("\nEnter number of Rows:");
    scanf("%d",&n);
    while(n>0)
    {
        printf("\n");
        i=1;
        while(i<=n)
        {
            printf("*");
            i++;
        }
        n=n-1;
    }
}