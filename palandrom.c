#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,sum=0,temp;
    printf("enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
        
    }
    
    if(temp==sum)
    {
        printf("number is palandrom  number\n");
    }
    else
    {
        printf("number is not palandrom number\n");
    }


}