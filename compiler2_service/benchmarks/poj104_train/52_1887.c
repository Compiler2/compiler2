#define NUM_ITER 56187

#include <header.h>

int main_bench()
{
int m,n,i,a[200],*p=a;
my_scanf("%d%d",&n,&m);
p=p+m;
for(i=1;i<=n-m;i++)
{
my_scanf("%d",p);
p++;
}
p=a;
for(i=1;i<=m;i++)
{
my_scanf("%d",p);
p++;
}
        p=a;
for(i=0;i<=n-2;i++)
{
my_printf("%d ",*p);
                p++;
}
my_printf("%d",*p);
}
