#define NUM_ITER 2888

#include <header.h>

int main_bench()
{
	int n,k,a[1000],b[1000],i,j,x=0,s;
		my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
				s=k+1;
			else
                s=a[i]+b[j];
			if(s==k)
				x=1;
		}
	}
	if(x==1)
		my_printf("yes");
	else
		my_printf("no");
	return 0;

}
	