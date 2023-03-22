#define NUM_ITER 5899

#include <header.h>

int main_bench()
{
int n,k,a[1000]={0},i,j,t=0,*p,*pt;
my_scanf("%d%d",&n,&k);
for(p=a;p<n+a;p++)
my_scanf("%d",p);
for(p=a;p<n-1+a;p++)
{for(pt=p+1;pt<n+a;pt++)
if((*p)+(*pt)==k)
t=1;
}
if(t==1)
my_printf("yes");
else
my_printf("no");
}

