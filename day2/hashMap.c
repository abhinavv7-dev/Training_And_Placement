#include<stdio.h>
int main()
{
    char str[100];
    
    int i=0;
    printf("Enter a string\n");
    fgets(str,sizeof(str),stdin);
    int hash[26]={0};
    while(str[i]!='\0')
    {
        char ch=str[i];
        int index=ch-'a';
        if(index<0)
        index=ch-'A';
        hash[index]++;
         i++;
    }
   
    for(i=0;i<26;i++)
    {
        printf("%c=%d ",'a'+i,hash[i]);
        if(i==12)
        printf("\n");
    }
    return 0;

}