#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[10];
    int i;
    for(i=0;i<=4;i++)
    {
        fflush(stdin);
        scanf("%c",&name[i]);
    }
    name[5] = '\0';
    printf("display name - \n");
    for(i=0;i<=4;i++)
    {
        printf("%c",name[i]);
    }
    getch();
}