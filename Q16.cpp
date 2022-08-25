#include<stdio.h>   //uppercase or lowercase
int main()
{
char ch;
printf("Enter the alphabet\n");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
printf("The alphabet is a upper case alphabet");
}
else if(ch>='a'&&ch<='z')
{
printf("The alphabet is a lower case alphabet");
}
else if(ch>='0'&&ch<='9')
{
    printf("The input is a digit");
}
else
{
printf("The input is a special character");
}
return 0;

}
