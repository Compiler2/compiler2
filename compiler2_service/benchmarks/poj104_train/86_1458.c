#include <header.h>

int main_bench()
{
	int i,j,m,n,k,e=0,t=0,a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		e=0;
		t=0;
		my_scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&a[j]);
		}
		for(j=0;j<m;j++)
		{
			t=3*j+a[j];
			if(t>=57&&t<=60)
			{
			    my_printf("%d\n",a[j]);
				break;	
			}
			if(t>60)
			{
				a[j]-=t-60;
				my_printf("%d\n",a[j]);
				break;
			}
		}
		if(t<57)
		{
			my_printf("%d\n",60-3*m);
		}
	
	}
	
	return 0;
}
