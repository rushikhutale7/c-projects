#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        if(i%2!=0)
        {
            printf("*\t");
        }
        else
        {

        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
        }
        printf("\n");
    }
    getch();
}