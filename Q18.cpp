#include<stdio.h>   //Number of days in a month
int main()
{
    int x;
    printf("Enter the month number :\n");
    scanf("%d",&x);
    if(x>12)
    {
        printf("Wrong input please enter a valid month number");
    }
    else if(x==1)
    {
        printf("This month consists of 31 days");
    }
    else if(x==2)
    {
        printf("This month consists of 28/29 days");

    }
    else if(x==3)
    {
        printf("This month consists of 31 days");
    }
    else if(x==5)
    {
        printf("This month consists of 31 days");
    }
    else if(x==7)
    {
        printf("This month consists of 31 days");
    }
    else if(x==8)
    {
        printf("This month consists of 31 days");
    }
    else if(x==10)
    {
        printf("This month consists of 31 days");
    }
    else if(x==12)
    {
        printf("This month consists of 31 days");
    }
    else
    {
        printf("This month consists of 30 days");
    }
    return 0;
}
