#define NUM_ITER 56788

#include <header.h>

int main_bench()
{
int a,n,i;
int p=0,q=0;
my_scanf("%d",&n);
i=1;
while(i<=n)
{
	my_scanf("%d",&a);
	if(a>=p){q=p,p=a;}
	if(a<p&&a>q){p=p,q=a;}
	if(a<=q){p=p,q=q;}
	i=i+1;
}
my_printf("%d\n%d",p,q);
	return 0;
}