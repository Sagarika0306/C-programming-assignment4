#include<stdio.h>
void main()
{
    int n,i,b,j;
    printf("\nEnter number of Rows:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=n+1-i)
        {
            printf("*");
            j++;
        }
        i++;
    }
}