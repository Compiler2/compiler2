#define NUM_ITER 36999

#include <header.h>

int main_bench()
{
	int n,a[100],b[100],c=0,sum=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{	
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			sum++;
			if(sum>c) c=sum;
		}
		else 
		{
			sum=0;
			continue;
		}

	}
	my_printf("%d",c);
	return 0;
}
