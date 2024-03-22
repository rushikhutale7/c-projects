#include<stdio.h>
#include<conio.h>

float average();
float average()
{
    float a,b,c,d,e,res;
    printf("enter value of 5 numbers\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    res = (a+b+c+d+e)/5;
    return res;
}


void main()
{
    float res;
    res = average();
    printf("average of 5 numbers is %f",res);
    getch();
}