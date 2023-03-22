#include <header.h>

int t=0;
void range(int n,int m,int *p)
{
	if(t==m)
		return;
	else
	{
		t++;
		range(n,m,p);
		int v=*(p+n-1);
		int i;
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		*p=v;

	}
}

int main_bench()
{
	int n,m;
	my_scanf("%d %d",&n,&m);
	int num[100];
	int *p=num;
	int i;
	for(i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	range(n,m,p);
	for(i=0;i<n-1;i++)
		my_printf("%d ",num[i]);
	my_printf("%d",num[n-1]);
}



