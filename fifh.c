#include<stdio.h>
#include<conio.h>
void main() 
{
int x[100],n,i;
float median(int,int[]);
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&x[i]);
printf("median=%f\n",median(n,x));
getch();
}

