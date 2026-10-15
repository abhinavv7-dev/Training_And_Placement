#include<stdio.h>
int n=0;
int main()
{
    
    n=n+1;
    
    printf("%d",n);
     if(n==5)
    return 0;
   
    
    main();
    return 0;
}