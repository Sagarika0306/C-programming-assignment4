#include<stdio.h>
void main()
{
    int i,j;
    i=1;
    while(i<=3)
    {
        printf("\n");
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        i++;
    }
}