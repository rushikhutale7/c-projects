#include<stdio.h>
#include<conio.h>
int strleng(char str[])
{
    int i=0,len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    return len;    
}
void main()
{
    int len;
    char str[10];
    printf("enter the string \n");
    gets(str);
    len = strleng(str);
    printf("lenght og given string %d",len);
    getch();
}