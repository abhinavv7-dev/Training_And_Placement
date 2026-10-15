#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(i!=n-1)
        printf("%d,",c);
        else
        printf("%d\n",c);
    }
   

return 0;
}