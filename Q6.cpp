#include<stdio.h> //greater b/w two numbers
int main()
{
    int x,y;
    printf("enter the first number:\n");
    scanf("%d",&x);
    printf("Enter the second number:\n");
    scanf("%d",&y);
    if(x>=y)
    {
        printf("%d is greater than %d",x,y);
    }
    else
    {
        printf("%d is greater than %d",y,x);
    }
    return 0;
}
