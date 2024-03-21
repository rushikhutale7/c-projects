#include<stdio.h>
#include<conio.h>
void add();
void add()
{
    int a,b,res;
    printf("enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    res=a+b;
    printf("result of addition is %d",res);
}
void main()
{
    add();
}