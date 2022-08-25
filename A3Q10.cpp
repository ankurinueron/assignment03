#include<stdio.h>
int main()
{
float x,y,p;
printf("enter the cost price of the product:\n");
scanf("%f",&x);
printf("enter the selling price of the product:\n");
scanf("%f",&y);
p=((y-x)/x)*100;
if(p>0)
{
    printf("your profit percentage is: %f",p);
}
else if(p<0)
    {
        printf("Your loss percentage is: %f",p);
    }
    else
        {
            printf("No profit No loss");

    }
    return 0;
}
