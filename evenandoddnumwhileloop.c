#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    printf("even no.s            and                             odd no.s are: \n");
    while(i<=50)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        else
        {
            printf("                                                   %d\n",i);
        }
        i++;
    }
    printf("these are all numbers from 1 to 50\n");

}