#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    char gender;
    printf("enter your age- \n");
    scanf("%d",&age);
    if(age>=60)
    {
        fflush(stdin);
        printf("enter the gender- \n");
        scanf("%c",&gender);
        if(gender=='f')
        {

            printf("rate of interest is 9.75 % \n");

        }
        else
        {
            printf("rate of interest is 9.5 % \n");
        }

    }

    else
    {
        printf("rate of interest is 8 % \n");
    }

    
}
