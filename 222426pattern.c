#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=22;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++,k=k+2)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }

}