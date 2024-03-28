#include<stdio.h>
#include<conio.h>
void firstarray(int a[])
{
    int i;
    printf("enter array elements-\n");
    for(i=0;i<=4;i++)
    {
        printf("enter the values at %d location\n",i);
        scanf("%d",a+i);
    }
}
void firstarrayview(int a[])
{
    int i;
    printf("display first array elements \n ");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",*(a+i));
    }

}

void secondarray(int b[])
{
    int i;
    printf("\nenter array elements-\n");
    for(i=0;i<=4;i++)
    {
        printf("enter the values at %d location\n",i);
        scanf("%d",b+i);
    }
}
void secondarrayview(int b[])
{
    int i;
    printf("display second array elements \n ");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",*(b+i));
    }

}
void addarray(int c[])
{
    int i;
    int a[5];
    int b[5];
    c[i] = a[i] + b[i];
    printf("\naddition of two arrays is-\n");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",*(c+i));
    }
}

void main()
{
    int a[5];
    int b[5];
    int c[5];
    firstarray(a);
    firstarrayview(a);
    secondarray(b);
    secondarrayview(b);
    addarray(c);

}

