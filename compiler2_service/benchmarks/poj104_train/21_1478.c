#define NUM_ITER 44450

#include <header.h>

int main_bench()
{
int i,n,r;
float a,c;
c=0;
a=0;
r=0;
int k[201],m[201];
my_scanf("%d",&n);
for(i=1;i<=n;i++)
my_scanf("%d",&k[i]);
for(i=1;i<=n;i++)
c=(c+k[i]);
c=c/n;
for(i=1;i<=n;i++)
{if ((k[i]>c?(k[i]-c):(c-k[i]))>a) {a=(k[i]>c?(k[i]-c):(c-k[i]));r=1;m[1]=k[i];}
else if((k[i]>c?(k[i]-c):(c-k[i]))==a) {r=r+1;m[r]=k[i];}}
for(i=1;i<=r;i++)
{my_printf("%d",m[i]);
if(i!=r) my_printf(",");}
my_printf("\n");
}