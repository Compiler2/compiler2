#define NUM_ITER 112107

#include <header.h>

int main_bench()
{
	int i,n,s=0;
	my_scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=s+i*i;

if(i%7==0||i%10==7||i>69&&i<80)
s=s-i*i;
}
my_printf("%d",s);
return 0;
}