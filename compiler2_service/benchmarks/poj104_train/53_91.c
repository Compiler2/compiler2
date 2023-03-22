#include <header.h>

 int main_bench()
{
	int n,i,a[300],j,b[100],s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[j]==a[i])
				a[j]=0;
	for(i=0;i<n;i++)
		if(a[i]!=0)
		{	b[s]=a[i];
		s++;}
	for(i=0;i<s-1;i++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[s-1]);
	}
