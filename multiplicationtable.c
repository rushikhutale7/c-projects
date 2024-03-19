#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("enter the number \n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf(" %d * %d = %d \n",num,i,num*i);

    }

    printf(" So this is table of %d",num);

}