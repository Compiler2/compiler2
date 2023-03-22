#define NUM_ITER 325351

#include <header.h>

int main_bench()
{
int n,k,i,j,sum,flag;
int a[1000];
my_scanf("%d %d\n",&n,&k);
my_scanf("%d",&a[0]);
flag=0;
for(i=1;i<=n-1;i++)
{
my_scanf(" %d",&a[i]);
for(j=0;j<i;j++)
{
sum=a[i]+a[j];
if(sum==k)
{
my_printf("yes");
flag=1;
break;
}
if(flag==1)
break;
}
if(flag==1)
break;
}
if(flag==0)
my_printf("no");
}