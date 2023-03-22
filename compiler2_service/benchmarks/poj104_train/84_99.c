#include <header.h>

int main_bench()
{
int a[100],max1,max2,n,i,*pa;
my_scanf("%d",&n);
for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
pa=a;
max1=a[0];
for(i=1;i<n;i++)
{if(a[i]>max1)
{max1=a[i];
    pa=&a[i];
}
}
*pa=0;
pa=a;
max2=a[0];
for(i=1;i<n;i++)
{if(a[i]>max2)
    max2=a[i];
}
my_printf("%d\n%d",max1,max2);
}
