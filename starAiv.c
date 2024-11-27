#include<stdio.h>
void main()
{
    int i,j,num;
    i=1;
    while(i<=3)
    {
        printf("\n");
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