#include<stdio.h>
#include<conio.h>
void simpleinterest();
void simpleinterest()
{
    int a,b,c,res;
    printf("enter the value of amount & rate & time\n");
    scanf("%d%d%d",&a,&b,&c);
    res=(a*b*c)/100;
    printf("simple interest is %d",res);
}
void main()
{
    simpleinterest();
}