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
printf("The alphabet is lower case alphabet");
}
else
{
printf("Please give a valid input");
}
return 0;

}
