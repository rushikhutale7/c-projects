#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int len;
    char str[10];
    printf("enter the string \n");
    gets(str);
    len=strlen(str);
    printf("lenght of string is %d",len);
}