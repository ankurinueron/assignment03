#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the values for a,b & c for quadratic equation ax^2+bx+c :\n");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d<0)
    {
        printf("The roots of given quadratic equation are Real & Distinct");
    }
    else if(d==0)
    {
        printf("The roots of given quadratic equation are Real & Equal");

    }
    else
    {
        printf("The roots of given quadratic equation are imaginary roots");
    }
    return 0;
}
