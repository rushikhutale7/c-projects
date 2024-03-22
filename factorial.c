#include<stdio.h>
#include<conio.h>
void main()
{
      int num,i,factorial=1;
    printf("enter the value of number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial = factorial * i ;
    }
    printf("\nfactorial of %d is %d \n",num,factorial);

}
