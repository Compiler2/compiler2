#include <header.h>

int m;
int main_bench()
{
	int n,a[300],i;
	void sear(int a[300],int n);
	for(;;)
	{my_scanf("%d%d",&n,&m);
	if(n==0)break;
	for(i=0;i<300;i++)
		a[i]=i+1;
	sear(a,n);
	}
}
	
void sear(int a[300],int n)
{
	int i,k,b[300];
	if(n>0)
	{
		for(i=0,k=m%n;i<n-1;i++,k++)
			b[i]=a[k%n];
		    sear(b,n-1);
	}
	if(n==1)
		my_printf("%d\n",a[0]);
}