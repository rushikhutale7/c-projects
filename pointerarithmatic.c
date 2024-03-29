#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p1,*p2,res;
    p1=&a[0];
    p2=&a[2];
    p1++;
    printf("vlaue of p1 is %d\n",*p1);
    p1--;
    printf("vlaue of p1 is %d\n",*p2);
    if(p1==p2)
    {
        printf("at same position\n");
    }
    else
    {
        printf("at no same position \n");

    }
    res=*p1+*p2;
    printf("res is %d\n",res);

}