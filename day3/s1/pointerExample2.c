#include<stdio.h>
int main()
{
    int arr[3]={7,18,45};
    int (*ptr)[3]=&arr;
    printf("%d\n",(*ptr)[2]);
    return 0;
}