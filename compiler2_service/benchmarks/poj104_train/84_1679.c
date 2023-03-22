#include <header.h>

int main_bench()
{
int k,i,a,b,c,d,max1,max2;
my_scanf("%d %d %d",&k,&a,&b);
if(a>b)
max1=a,max2=b;
else
max1=b,max2=a;
for(i=1;i<=k-2;i++)
{
my_scanf("%d",&c);
if(c>max1)
d=max1,max1=c,max2=d;
else
if(c>max2)
max2=c;
}
my_printf("%d\n",max1);
my_printf("%d\n",max2);
}