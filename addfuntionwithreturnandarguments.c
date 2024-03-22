#include<stdio.h>
#include<conio.h>
int add();
int add()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

void main()
{
    int res;
    res=add();
    printf("addition is %d",res);
    getch();

}