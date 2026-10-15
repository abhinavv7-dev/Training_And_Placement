#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int new[3][3]={0};
    int m=1,n=1,k=0;
    
    
    for(int i=2;i>=0;i--)
    {
        for(int j=2;j>=0;j--)
        {
            new[2-i][2-j]=arr[i][j];
        }
    
    }
    

    printf("OLD\n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    printf("%d",arr[i][j]);
    }
    printf("\n");
    }
    printf("NEW\n");

    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    printf("%d",new[i][j]);
    }
    printf("\n");
    
    }
    
    return 0;
}