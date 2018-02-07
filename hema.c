#include <stdio.h>
#include <stdlib.h>
void main()
{
int n;
printf("\n enter the n value:");
scanf('%d",&n);
if ( (n / 60) == 1 ) 
printf("%01d hour",n/60);
else 
printf("%01d hours",n/60);

if ( (n % 60) == 1) 
printf(" %01d minute\n",n%60);
else 
printf(" %01d minutes\n",n%60);

return 0;
}
