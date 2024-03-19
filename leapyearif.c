#include<stdio.h>
#include<conio.h>
void main()
{ 
    int num;
    printf("enter the year\n");
    scanf("%d",&num);

    if((num%4==0)&&(num%400==0||num%100!=0))
    {
        printf("%d is a leap year\n",num);

    }
    else
    {
        printf("%d is not a leap year\n",num);

    }
    printf("program complete\n");


}