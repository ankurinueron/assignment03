#include<stdio.h>
int main()
{
    float m,n,o;
    printf("Enter the number :\n");
    scanf("%f",&m);
    printf("Enter the second number:\n");
    scanf("%f",&n);
    printf("Enter the third number:\n");
    scanf("%f",&o);
    if(m>=n&&m>=o)
        {
            printf("%f is the greatest number",m);
            }
            else if(n>=m&&n>=o)
                {
                printf("%f is the greatest number",n);
            }
            else
            {
            printf("%f is the greatest number",o);
            }
            return 0;
            }
