#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    i=1;
    while(i<=3)
    {
        printf("\n");
        ch='A'+i-1;
        j=1;
        while(j<=i)
        {
            printf("%c",ch);
            ch++;
            j++;
        }
        i++;
    }
}