#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void swap(int *pX ,int *pY)
{
    int temp;
    temp = *pX;
    *pX =*pY;
    *pY = temp;
}

void main()
{
    int num1=10,num2=20;
    printf("value of num1 and num2 after swapping is %d------%d\n",num1,num2);
    swap(&num1,&num2);
    printf("value of num1 and num2 after swapping is %d------%d\n",num1,num2);

}