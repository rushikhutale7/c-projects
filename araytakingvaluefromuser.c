#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5],i;
    for(i=0;i<=4;i++)
    {
        printf("enter the values of marks at %d location\n",i);
        scanf("%d",(marks+i));

    }
    printf("display marks \n");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",*(marks+i));

    }
}

