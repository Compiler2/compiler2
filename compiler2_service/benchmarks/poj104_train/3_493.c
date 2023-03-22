#define NUM_ITER 6106

#include <header.h>

int main_bench()
{
	int n,k;
	int a[1000];
	int i,j;
	int num=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==k)
				num=num+1;
			if(num==0)
				my_printf("no\n");
			else
				my_printf("yes\n");
}