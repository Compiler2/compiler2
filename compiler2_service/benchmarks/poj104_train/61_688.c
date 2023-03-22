#define NUM_ITER 6520

#include <header.h>

int main_bench()
{
	int n,a[100],t[100],i,j,c=1,b=1,e,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]==2||a[i]==1)
		{
			my_printf("1\n");
			
		}
		else
		{
			c=1;b=1;
		    for(j=2;j<a[i];j++)
		    {
			    t[j]=c+b;
				l=j;
			    e=b;
			    b=c+b;
			    c=e;
		    }
		    my_printf("%d\n",t[l]);
		}
	}
	return 0;
}
