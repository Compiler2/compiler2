#define NUM_ITER 53105

#include <header.h>

int main_bench()
{int a[100],b[100];
int n,*p,*t;
my_scanf("%d",&n);
for(p=a;p<=a+n-1;p++)
my_scanf("%d",p);
for(p=a,t=b+n-1;p<=a+n-1;p++,t--)
*t=*p;
for(t=b;t<b+n-1;t++)
my_printf("%d ",*t);
my_printf("%d",*t);

}