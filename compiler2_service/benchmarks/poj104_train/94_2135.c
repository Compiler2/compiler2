#define NUM_ITER 3325

#include <header.h>

int main_bench()
{
int n,i,j,flag;
flag=0;
int a[10000];
int b[10000]={0};
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&a[i]);
if(a[i]%2==1)
b[a[i]]=1;
}
for(i=1;i<10000;i++)
{
if(b[i])
{
 if(flag)
{
my_printf(",%d",i);
}
else
{
my_printf("%d",i);
flag=1;
}
}
}
}
