#include <header.h>

int main_bench()
{
	int x[1000],y[1000],n,k,i,j,he,z=0;
	my_scanf ("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&x[i]);
		y[i]=x[i];
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			he=x[i]+y[j];
			if (he==k) z+=1;
			else z+=0;
		}
	}
if (z>0) my_printf("yes");
else my_printf ("no");
}