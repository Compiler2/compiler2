#define NUM_ITER 60967

#include <header.h>

int main_bench()
{
	int i,m,n,p,a[100];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
		if(i==1)
		{
			if(a[0]>a[1])
			{
				m=a[0];
			    p=a[1];
            }
			else if(a[0]<a[1])
            {   
				m=a[1];
			    p=a[0];
			}
		}
		if(i>1)
			if(a[i]>m)
			{
				p=m;
				m=a[i];
			}
			else if((a[i]>p)&&(a[i]<m)==1)
			{
				m=m;
				p=a[i];
            }
	}
	my_printf("%d\n",m);
	my_printf("%d\n",p);
	return 0;

}