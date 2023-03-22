#define NUM_ITER 56407

#include <header.h>

int main_bench()
{
int a[100000],i,n,k,b;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&a[i]);
}
my_scanf("%d",&k);
for(i=0;i<n;i++) {
if(a[i]!=k){
b=a[0];
a[0]=a[i];
a[i]=b;
break;
}
}
my_printf("%d",a[0]);
for(i=1;i<n;i++) if(a[i]!=k)my_printf(" %d",a[i]);
return 0;
}

