#include<stdio.h>
int main(){
int a,b,c,d,e;
float tot;
printf("Enter subject wise marks obtained (out of 100) - \n Science:\nMaths:\nEnglish:\nSocial science:\n& Hindi:\n",a,b,c,d,e);
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=((a+b+c+d+e)/5);
if(tot>100){
    printf("Please enter valid marks");
}
else if(tot>33){
    printf("congratulations you have passed the exam");
}
else{
    printf("you have failed the exam, better luck next time");
}
return 0;
}

