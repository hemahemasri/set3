#include<stdio.h>
int main()
{
char ch;
printf("enter the character:\n");
scanf("%d",&ch);
if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
{
printf("%c",is alphabet",ch);
}
else if(ch>=48&&ch<=57)
{
printf("%c",is digit ",ch);
}
else
{
printf("%c",is a character",ch);
}
return 0;
}
