#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides of a triangle:");
    scanf("%d%d%d",&x,&y,&z);
    if((x+y>z))
    {
        printf("It is a valid triangle");
    }
    else if((y+z>x))
    {
        printf("It is valid triangle");
    }
    else if((x+z>y))
    {
        printf("it is a valid triangle");
    }
    else
    {
        printf("It is not a valid triangle");
    }
    return 0;
}
