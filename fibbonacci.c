#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,a=0,b=1,c;
    printf("enter the value of number\n");
    scanf("%d",&num);
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=2;i<num;++i)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;

}