#include<stdio.h>
#include<conio.h>
int add(int,int);
int add(int a , int b)
{
    int c;
    c=a+b;
    return c;

}

void main()
{
    int a,b,res;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    res = add(a,b);
    printf("addtion is %d",res);
    getch();
    
}