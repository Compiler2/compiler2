#define NUM_ITER 6113

#include <header.h>

int main_bench()
{
	int n,k,m=0;
	int a[1000];
	int i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
			if(a[i]+a[i+j]==k)
				m++;

    if(m)
		my_printf("yes");
	else
		my_printf("no");

}