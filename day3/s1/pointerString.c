#include<stdio.h>
int main()
{
    char text[]="ABHINAV";
    char *p=text;
    while(*p!='\0')
    printf("%c\n ",*p++);
}