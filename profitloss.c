#include<stdio.h>
#include<conio.h>
void main()
{
    int cp,sp;
    
    printf("enter your cost price- \n");
    scanf("%d",&cp);
    printf("enter your selling price- \n");
    scanf("%d",&sp);
    if(sp>cp)
    {

     printf("you are in profit \n");

    }

    else
    {
        printf("you are in loss \n");
    }

    
}