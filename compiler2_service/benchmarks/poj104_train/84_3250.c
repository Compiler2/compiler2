#include <header.h>

int main_bench()
{ 
	int n,b,a[100],t,i,j;
	my_scanf("%d",&n);
	b=n;
	for(i=0;i<b;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<b-1;j++)
		for(i=0;i<b-1-j;i++)
			if(a[i]>a[i+1])
			{	
				t=a[i];
			    a[i]=a[i+1];
				a[i+1]=t;
			}
	my_printf("%d\n",a[b-1]);
	my_printf("%d\n",a[b-2]);
}
