#include <header.h>

int main_bench()
{
	int i,n,k,a[300],m[300];
	float b[300],aver=0,max;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		aver=aver+a[i];
	}
	aver=aver/n;
	max=b[0]=fabs(a[0]-aver);
	for(i=1;i<n;i++)
	{
		b[i]=fabs(a[i]-aver);
		if(b[i]>max)
			max=b[i];
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
			m[k++]=a[i];
	}
	my_printf("%d",m[0]);
	for(i=1;i<k;i++)
		my_printf(",%d",m[i]);
	my_printf("\n");
}

