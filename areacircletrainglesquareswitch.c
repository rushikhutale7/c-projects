#include<stdio.h>
#include<conio.h>
void main()
{

    int num,l,b,r,h;
    printf("enter the lenght of the structure...please add values in multiples of 10\n");
    scanf("%d",&l);
    printf("enter the breadth of the structure...please add values in multiples of 10\n");
    scanf("%d",&b);
    printf("enter the radius of the circle...please add values in multiples of 10\n");
    scanf("%d",&r);
    printf("enter the height of the structure...please add values in multiples of 10\n");
    scanf("%d",&h);

    printf("enter the number 1.circle 2.rectangle 3.square 4.traingle  \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        num=3.14*r*r;
        printf("area of circle is %d\n",num);
        break;

        case 2:
        num=l*b;
        printf("area of rectangle is %d\n",num);
        break;


        case 3:
        num=l*l;
        printf("area of square is %d\n",num);
        break;

        case 4:
        num=(b*h)/2;
        printf("area of traingle is %d\n",num);
        break;

        /*case 5:
        num=a%b;
        printf("modulus of two numbers is %d\n",num);
        break;*/


        default:
        printf("you can only choose numbers between 1-4\n");
        break;
        

    }
    printf("program complete\n");

}