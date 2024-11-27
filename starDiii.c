#include<stdio.h>
void main()
{
    int n,i,b,j,num;
    printf("\nEnter number of Rows:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<=n-i)
        {
            printf(" ");
            b++;
        }
        j=1;
        num=i;
        while(j<=i)
        {
            printf("%d",num);
            num++;
            j++;
        }
        i++;
    }
}