#include<stdio.h>
void main()
{
int dif,f,ap,val,item,sum=0,i;
printf("enter the number of items in arithmetic progression\n");
scanf("%d",&item);
printf("\n enter the first value and arithmetic progression\n");
scanf("%d %d",&f,&ap);
val=f;
printf("\n ARITHMETIC PROGRESSION IS");
for(i=0;i<=item;i++)
{
printf("%d",val);
sum+=val;
val=val*dif;
printf("\n the sum of arithmetic progression %dand item %d\n",item,sum);
return 0;
}
