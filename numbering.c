#include<stdio.h>
void main()
{
char k;
clrscr();
printf("Enter the character:");
scanf("%c",&k);
if(k>='0'&& k<='9')
{
printf("yes");
}
else
{
printf("No");
}
getch();
}
