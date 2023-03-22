#include <header.h>

int main_bench()
{
	int n,x,y;
	my_scanf("%d",&n);
	x=0;
	y=0;
	int a[200],b[200];
	int i;
	for(i=1;i<=n;i++)
	{
		my_scanf("%d %d",&a[i],&b[i]);
		
		if(a[i]==0)
		{
			
			if(b[i]==1)
				x=x+1;
			if(b[i]==2)
				y=y+1;
		}
		if(a[i]==1)
		{
			if(b[i]==0)
				y=y+1;
			if(b[i]==2)
				x=x+1;
		}
		if(a[i]==2)
		{
			if(b[i]==0)
				x=x+1;
			if(b[i]==1)
				y=y+1;
		}
	}
	if(x==y)
		my_printf("Tie");
	if(x<y)
		my_printf("B");
	if(x>y)
		my_printf("A");
	return 0;
}