#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(n>0)
        {
            printf("The number is positive");
            }
            else if(n<0)
            {
            printf("The number is negative");
            }
            else
            {
            printf("The number is 0");
            }
            return 0;
            }
