#include <header.h>


int main_bench()
{
	int n,z[500],j,i,w;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&z[i]);
	for(j=0;j<n;j++)
	{
		for(i=j+1;i<n;i++)
			if(z[j]>z[i])
			{
				w=z[i];
				z[i]=z[j];
				z[j]=w;
			}
	}
	w=0;
    for(i=0;i<n;i++)
	{
		if(z[i]%2!=0)
		{
			if(w==0)
			my_printf("%d",z[i]);
			else
				my_printf(",%d",z[i]);
		}
		w++;
	}
               
	return 0;
}
