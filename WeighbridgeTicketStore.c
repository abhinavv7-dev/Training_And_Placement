#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int tic;
    char vehno[50];
    float gross;
    float tare;
    float net;
}Ticket;

float help1(Ticket *trucks,int n)
{
    for(int i=0;i<n;i++)
    trucks[i].net=trucks[i].gross-trucks[i].tare;
    return 
}

void help2(Ticket *trucks,int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("Ticket ID:");
        printf("%d\n",trucks[i].tic);
        printf("Vehicle no:");
        printf("%s\n",trucks[i].vehno);
        printf("Gross weight:");
        printf("%.2f\n",trucks[i].gross);
        printf("Tare weight:");
        printf("%.2f",trucks[i].tare);
        printf("Net weight:");
        printf("%.2f",trucks[i].net);
    }
}

int main()
{
    int n;
    float sum=0.0;
    
    printf("Enter the value of n\n");
    if (scanf("%d", &n)<=0||n>10000)
    {
    printf("Invalid input");
    exit(0);
    }
    Ticket *trucks=(Ticket*)malloc(n*sizeof(Ticket));
    int max=0;
    for(int i=0;i<n;i++)
    {
        printf("Ticket ID:");
        scanf("%d",&trucks[i].tic);
        printf("Vehicle no:");
        scanf("%s",trucks[i].vehno);
        printf("Gross weight:");
        scanf("%f",&trucks[i].gross);
        printf("Tare weight:");
        scanf("%f",&trucks[i].tare);
    }

    help2(trucks,n)

    
    for(int i=0;i<n;i++)
    {
        
        sum=sum+trucks[i].net;
        if(trucks[i].net>trucks[max].net)
        max=i;
    }
    printf("TRUCKS\n");
    
    printf("Total weight:,%.2f\n",sum);
    printf("Highest weight: %d %s\n",trucks[max].tic,trucks[max].vehno);
    return 0;

}