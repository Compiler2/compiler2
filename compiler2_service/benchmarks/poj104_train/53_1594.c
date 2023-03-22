#define NUM_ITER 6029

#include <header.h>

int main_bench()
{
	int a[300],n,i,j,b[300]={0},s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(!b[i])
		{
			if(s)my_printf(",");
			my_printf("%d",a[i]);
			s=1;}
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				b[j]=-1;
	}
}
