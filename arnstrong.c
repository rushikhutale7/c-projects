#include<stdio.h>
#include<conio.h>
void main()
{
    int num,originnum,rem,result=0,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    originnum=num;
    while(num!=0)
    {
        rem=num%10;
        result=rem*rem*rem;
        sum=sum+result;
        num=num/10;
        
    }
    
    if(originnum==sum)
    {
        printf("number is armstrong number\n");
    }
    else
    {
        printf("number is not armstrong number\n");
    }


}