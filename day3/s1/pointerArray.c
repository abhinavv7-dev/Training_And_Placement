#include<stdio.h>
int main()
{
    int *p[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",p[i]);
    }
}