#define NUM_ITER 8137

#include <header.h>

int main_bench()
{
	int n,a[20001],i,j,t,f;
	my_scanf("%d",&n);
	my_scanf("%d",&f);
	my_printf("%d",f);
	for(i=1;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
		for(j=1;j<=i-1;j++)
		{
			t=a[i]-a[j];
			if(t==0)
				break;
		}
		if(t==0||a[i]==f)
			continue;
			my_printf(",%d",a[i]);
	}
	return 0;
}