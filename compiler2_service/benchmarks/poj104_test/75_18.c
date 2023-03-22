#include <header.h>

int main_bench()
{
	int i,j,n=1,a[1000],b[1000],c[1000]={0},t1,t2;

	my_scanf("%d",&a[0]);
	while(my_scanf(",%d",&a[n]))
		n++;
	my_scanf("%d",&b[0]);
	for(i=1;i<n;i++)	
		my_scanf(",%d",&b[i]);

	t1=a[0];
	t2=b[0];
	for(i=0;i<n;i++)
	{
		if(t1>a[i])
			t1=a[i];
		if(t2<b[i])
			t2=b[i];
	}

	for(i=t1;i<=t2;i++)
		for(j=0;j<n;j++)
			if(i>=a[j]&&i<b[j])
				c[i-t1]++;

	j=c[0];
	for(i=1;i<=t2-t1;i++)
		if(j<c[i])
			j=c[i];

	my_printf("%d %d\n",n,j);
}

