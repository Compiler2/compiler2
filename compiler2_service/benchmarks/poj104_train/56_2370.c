#define NUM_ITER 1038487

#include <header.h>

int main_bench()
{
int n,t,i,z=1,a[5],m=0;
my_scanf("%d",&n);
t=n;
while(t/10!=0)
{z++;t=t/10;
}
for(i=0;i<z;i++)
{
a[i]=n%10;
m=m*10+a[i];
n=n/10;
}
my_printf("%d",m);
}