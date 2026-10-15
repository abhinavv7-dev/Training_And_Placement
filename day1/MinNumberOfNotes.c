#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a integer:");
    scanf("%d",&n);
    int notes[]={100,50,20,10,5,2,1};
    int size=sizeof(notes)/sizeof(notes[0]);
    for(int i=0;i<size;i++)
    {
        if(n==0)
        break;

        count+=n/notes[i];
        n=n%notes[i];
    }
    
      


    
    printf("%d\n",count);
    return 0;
}