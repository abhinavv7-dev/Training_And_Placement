#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    char village[50];
    int pin;
}Address;

typedef struct
{
    int id;
    char name[20];
    float share;
    Address address;
}Member;

int main()
{
    int n;
    float sum=0.0;
    
    printf("Enter the value of n\n");
    if (scanf("%d", &n)<=0||n>200)
    {
    printf("Invalid input");
    exit(0);
    }
    Member ledger[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        printf("ID:");
        scanf("%d",&ledger[i].id);
        printf("Name:");
        scanf("%s",ledger[i].name);
        printf("Share:");
        scanf("%f",&ledger[i].share);
        printf("Village:");
        scanf("%s",ledger[i].address.village);
        printf("Pincode:");
        scanf("%d",&ledger[i].address.pin);
    }
    
    for(int i=0;i<n;i++)
    {

        sum=sum+ledger[i].share;
        if(ledger[i].share>ledger[max].share)
        max=i;
    }
    printf("MEMBER LEDGER\n");
    for(int i=0;i<n;i++)
    {
        printf("ID:");
        printf("%d\n",ledger[i].id);
        printf("Name:");
        printf("%s\n",ledger[i].name);
        printf("Share:");
        printf("%.2f\n",ledger[i].share);
        printf("Village:");
        printf("%s\n",ledger[i].address.village);
        printf("Pincode:");
        printf("%d\n",ledger[i].address.pin);
    }
    printf("Total share capital:,%.2f\n",sum);
    printf("Highest Holder: %d %s\n",ledger[max].id,ledger[max].name);
    return 0;

}