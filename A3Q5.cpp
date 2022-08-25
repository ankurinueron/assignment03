#include<stdio.h>
int main()
{
    int x,y=0;
    printf("enter any number\n");
    scanf("%d",&x);
    while(x!=0){
        x=x/10;
        y++;
    }
    if(y==3){
    printf("It is a 3 digit number");
    }
    else{
        printf("it is not a 3 digit number");
    }

    return 0;

}
