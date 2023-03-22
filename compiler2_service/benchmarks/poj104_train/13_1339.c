#define NUM_ITER 42674

#include <header.h>

int main_bench()
{
int sz[100000],a[100],n,i,d;
my_scanf("%d",&n);
for(i=0;i<100;i++)
{
	a[i]=1;

}
my_scanf("%d",&sz[0]);
my_printf("%d",sz[0]);
a[sz[0]]=0;
for(i=1;i<n;i++)
{
	my_scanf("%d",&sz[i]);
		d=sz[i];
		if(a[d]!=0)
		{
			my_printf(" %d",sz[i]);
		}

	a[d]=0;
}


return 0;

}