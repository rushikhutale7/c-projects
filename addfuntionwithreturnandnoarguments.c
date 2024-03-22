#include<stdio.h>
#include<conio.h>
int add();
int add()
{
    int a,b,c;
    printf("enter the values of a b \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
void main()
{
    int res;
    res = add();
    printf("addtion is %d",res);
    getch();
}