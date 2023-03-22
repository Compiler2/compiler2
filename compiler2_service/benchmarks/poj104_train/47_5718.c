#define NUM_ITER 57186

#include <header.h>

int main_bench()
{
int i,n,a[100],* p=a;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",p++);
}
p--;
for(i=0;i<n;i++,p--)
{
if(i==0)
my_printf("%d",* p);
else
my_printf(" %d",* p);
}
return 0;
}

