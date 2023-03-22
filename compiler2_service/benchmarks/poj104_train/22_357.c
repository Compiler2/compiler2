#define NUM_ITER 205182

#include <header.h>


int main_bench()
{int a[100],i,max,min,n;
char c;
for(i=0;;i++)
{my_scanf("%d%c",&a[i],&c);
if(c=='\n')
break;
}
for(n=0,max=0;n<=i;n++)
if(a[n]>=max)
max=a[n];
for(n=0,min=0;n<=i;n++)
if(a[n]>=min&&a[n]<max)
min=a[n];
if(min==0)
my_printf("No");
else
my_printf("%d",min);
   return 0;
}
