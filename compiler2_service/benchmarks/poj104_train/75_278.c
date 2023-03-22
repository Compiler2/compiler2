#define NUM_ITER 409361

#include <header.h>

int main_bench()
{
	int a[2000],b[2000],i,j,n,m,k,p;
	my_scanf("%d",&a[1]);
	i=2;
	while(my_scanf(",%d",&a[i]))
		i++;
	my_scanf("%d",&b[1]);
	j=2;
	while(my_scanf(",%d",&b[j]))
		j++;
	j--;
	my_printf("%d ",j);
	n=0;
	for(i=1;i<=j;i++)
		if(b[i]>n)
			n=b[i];
	m=0;
	for(i=0;i<n;i++)
	{
		p=0;
		for(k=1;k<=j;k++)
			if(i>=a[k]&&i<b[k])
				p++;
		if(p>m)
			m=p;
	}
	my_printf("%d",m);
}
