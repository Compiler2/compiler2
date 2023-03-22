#define NUM_ITER 5716

#include <header.h>

int main_bench()
{
int m,n,k1,k2;
my_scanf("%d",&n);
int an[300];
int silly[300];
int i,j,e,p=0,a=0,b;
for(i=0;i<n;i++)
{
my_scanf("%d",&e);
an[i]=e;
}
for(i=0;i<n;i++)
{
p=0;
for(j=i-1;j>=0;j--)
{
if(an[i]==an[j]){p++;}
}
if(p==0){silly[a]=an[i];a++;}
}
for(i=0;i<a;i++)
{
my_printf("%d",silly[i]);
if(i!=a-1)my_printf(",");
}
return 0;
}
