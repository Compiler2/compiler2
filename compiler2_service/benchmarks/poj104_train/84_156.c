#include <header.h>

int main_bench()
{
	int n,i,c,d,t;
	t=0;
	my_scanf("%d",&n);
	int a[100];
	for(i=0;i<=(n-1);i++)
		my_scanf("%d",&a[i]);
	for(c=0;c<=(n-2);c++)
	{
		for(d=(n-1);d>=(c+1);d--)
		{
			if(a[d]>a[d-1])
			{
				t=a[d-1];
			    a[d-1]=a[d];
				a[d]=t;
			}
		}
	}
	my_printf("%d\n",a[0]);
	my_printf("%d\n",a[1]);
	return 0;

}