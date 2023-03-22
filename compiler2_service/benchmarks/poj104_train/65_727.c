#include <header.h>

int main_bench()
{
	int n,i,a[200],b[200],x,y;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&a[i] ,&b[i]);
	}
x=0;
y=0;
	for(i=0;i<n;i++)
	{
		if(a[i]-b[i]==-1||a[i]-b[i]==2)
			x++;
		if(a[i]-b[i]==1||a[i]-b[i]==-2)
			y++;
	}
	if(x>y)
		my_printf("A");
	if(x<y)
		my_printf("B");
	if(x==y)
		my_printf("Tie");
	return 0;
}
