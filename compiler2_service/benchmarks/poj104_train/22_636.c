#define NUM_ITER 1573712

#include <header.h>

int main_bench()
{
char c=',';int i=0,a[301],j,max=0;
while(c==',')   {my_scanf("%d%c",&a[i],&c);i++;}
for(j=0;j<i;j++)    {if(a[j]>max)  max=a[j];}
for(j=0;j<i;j++)    {if(a[j]==max)  a[j]=0;}
max=0;
for(j=0;j<i;j++)    {if(a[j]>max)  max=a[j];}
if(max==0)   my_printf("No");
else   my_printf("%d",max);
}
