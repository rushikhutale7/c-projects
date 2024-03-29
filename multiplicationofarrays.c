#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[5],c[5];
    printf("enter array elements-\n");
    for(i=0;i<=4;i++)
    {
        printf("enter the values at %d location\n",i);
        scanf("%d",a+i);
    }
    printf("display first array elements \n ");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",*(a+i));
    }
    printf("\nmultiplication of arrays is-\n");
    for(i=0;i<=4;i++)
    {
        c[i] = a[i] * 3;
        printf("\t%d",*(c+i));
    }
    printf("\n");
}