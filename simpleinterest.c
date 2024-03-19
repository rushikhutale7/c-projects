#include<stdio.h>
#include<conio.h>
void main()
{

int p,n,r,res;
printf("enter value of amount-");
scanf("%d",&p);
printf("enter the value of time-");
scanf("%d",&n);
printf("enter the value of rate-");
scanf("%d",&r);
res=(p*n*r)/100;
printf("simple interest is - %d",res);


}
