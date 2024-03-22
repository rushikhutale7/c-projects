#include<stdio.h>
#include<conio.h>
void main()
{
    int grades;
    printf("enter the value of grades\n");
    scanf("%d",&grades);
    if(grades>40)
    {
        if(grades>=75)
        {
            printf("grade A\n");
        }
        else if(grades>=60)
        {
           printf("grade B\n"); 
        }
        else if(grades>=40)
        {
            printf("grade C\n"); 
        }
        
    }
    else
    {
        printf("grade F\n");
    }
}