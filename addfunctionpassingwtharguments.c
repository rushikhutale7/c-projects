#include<stdio.h>
#include<conio.h>
void add(int,int);
void add(int a ,int b)
{
    int c ;
    c=a+b;
    printf("addtion os numbers is %d",c);
  
}
void main()
{
    int a,b;
    printf("enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    getch();
}