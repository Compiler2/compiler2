#include <header.h>

int main_bench()
{
	int a[100001],n,i,j,x,m,t;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	a[n]=0;
	my_scanf("%d\n",&x);
	for(m=0,i=0;i<n;i++) 
		if(a[i]==x) 
		{
			t=i;
			for(j=t;j<n;j++) a[j]=a[j+1];
			m++;
			i--;
		}
	for(i=0;i<n-m-1;i++) my_printf("%d ",a[i]);
	my_printf("%d\n",a[n-m-1]);
}
