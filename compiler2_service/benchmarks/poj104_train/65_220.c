#include <header.h>

int main_bench()
{
	int n,i,p,q;
	int a[100],b[100];
	my_scanf("%d",&n);
	p=0;
	q=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==1)
		{
			p++;
		}
		else if(a[i]==0&&b[i]==2)
		{
			q++;
		}
		else if(a[i]==0&&b[i]==0)
		{
			p=p;
		}
		else if(a[i]==1&&b[i]==2)
		{
			p++;
		}
		else if(a[i]==1&&b[i]==0)
		{
			q++;
		}
		else if(a[i]==1&&b[i]==1)
		{
			p=p;
		}else if(a[i]==2&&b[i]==0)
		{
			p++;
		}
		else if(a[i]==2&&b[i]==1)
		{
			q++;
		}
		else if(a[i]==2&&b[i]==2)
		{
			p=p;
		}
	}
	if(p==q)
	{
		my_printf("Tie");
	}
	else if(p>q)
	{
		my_printf("A");
	}
	else
	{
		my_printf("B");
	}
	return 0;
}