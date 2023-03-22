#include <header.h>

int main_bench()
{
	int n,k,i,p,q,x;
	int a[1000];
	x=-1;
	my_scanf("%d %d",&n,&k);
	my_scanf("%d",&a[1]);
	for (i=2;i<=n;i++)               
	{
		my_scanf(" %d",&a[i]);
	}
	for (p=1;p<=n-1;p++)            
	{
		for (q=p+1;q<=n;q++)
		{
			if (a[p]+a[q]==k)       
				x=1;
		}
		if (x==1)                   
		break;
	}
	if (x==-1)
		my_printf("no");
	else
		my_printf("yes");
	return 0;
}