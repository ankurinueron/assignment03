#include<stdio.h>   //divisible by 3&7
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(n%3==0&&n%7==0)
        {
            printf("The number is divisible by both 3 & 7");
            }
            else if(n%3==0&&n%7!=0)
            {
            printf("The number is divisible by 3 but not 7");
            }
            else if(n%7==0&&n%3!=0)
            {
                printf("The number is divisible by 7 but not 3");

            }
            else
            {
                printf("The number is neither divisible by 7 nor 3");
            }
            return 0;
            }
