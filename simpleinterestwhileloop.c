#include<stdio.h>
#include<conio.h>
void main()
{
    int p,n,r,si;
    int i=1;
    while(i<=3)
    {
        printf("enter values for principal amount , time period , rate of interest\n");
        scanf("%d%d%d",&p,&n,&r);
        si = (p*n*r)/100;
        printf("simple interest is %d\n",si);
        i++;
    }
    printf("thankyou for banking with us\n");

}