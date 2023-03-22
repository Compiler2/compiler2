#define NUM_ITER 8818

#include <header.h>

int main_bench()
{
int a[300],i,j=0,k,l,n;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%d ",&a[i]);}
my_printf("%d",a[0]);
for(i=1;i<n;i++)
{while(a[i]!=a[j]) j++;if(j==i){my_printf(",%d",a[i]);}
j=0;}
}
