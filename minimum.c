#include<stdio.h>
void main()
{
int  a[100],min,i,n;
printf("\n enter the elements in array");
scanf("%d",&n);
printf("\n enter integer value");
for(i=0;i<n;i++)
{
scanf(%d",&a[i]);
min=a[0];
for(i=1;i<n;i++);
{
if(a[i]<min)
{
min=a[i];
}
}
printf("min value is %d",min)'
getch();
}
