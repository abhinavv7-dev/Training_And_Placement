#include<stdio.h>
int main()
{
    int n=1202105;
    int *freq=(int *)calloc(10,sizeof(int));
    int hash[10]={1,2,3,4,5,6,7,8,9,0};
    int rem;

    while(n!=0)
    {
        rem=n%10;
        for(int i=0;i<10;i++)
        if(rem==hash[i])

    }
}