#define NUM_ITER 57400

#include <header.h>

int main_bench()
{
int i,n;
my_scanf("%d\n",&n);
int num[n];
for(i=0;i<n;i++)
my_scanf("%d",&num[i]);
for(i=1;i<n;i++)
my_printf("%d ",num[n-i]);
my_printf("%d",num[0]);
return 0;
}
