#include<stdio.h>
#include<conio.h>
void main()
{

    int num,a=9,b=3;
    printf("enter the number 1.addition 2.substraction 3.division 4.multiplication 5.modulus \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        num=a+b;
        printf("addition of two numbers is %d\n",num);
        break;

        case 2:
        num=a-b;
        printf("substraction of two numbers is %d\n",num);
        break;


        case 3:
        num=a/b;
        printf("division of two numbers is %d\n",num);
        break;

        case 4:
        num=a*b;
        printf("multiplication of two numbers is %d\n",num);
        break;

        case 5:
        num=a%b;
        printf("modulus of two numbers is %d\n",num);
        break;


        default:
        printf("you can only choose numbers between 1-4\n");
        break;
        

    }
    printf("program complete\n");

}