#define NUM_ITER 54260

#include <header.h>

char a[10000][256];
int main_bench()
{
	int n,k;
	int i,j;
	int a[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[i]+a[i+j]==k)
			{
				my_printf("yes\n");
				goto end;
			}
			if(i==n-1&&j==n-i-1)my_printf("no\n");
		}
    end:;
	
}