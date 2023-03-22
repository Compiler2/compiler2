#include <header.h>

int main_bench()
{
	int n,i,j,k,l,a,c;
	a=0;
	int sz[500];
	int sc[500];
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
		my_scanf ("%d",&sz[i]);
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
			a=a+1;
	}
	j=0;
	for (k=0;k<a;k++)                     
	{
		while (j<n)
		{
			if (sz[j]%2!=0)
				break;
			else
				j++;
		}
		sc[k]=sz[j];
		j++;
	}
	for (l=0;l<a;l++)
	{
		for (k=a-1;k>l+1;k--)
		{
			if (sc[k-1]>sc[k])
			{
				c=sc[k-1];
				sc[k-1]=sc[k];
				sc[k]=c;
			}
		}
	}
	for (l=0;l<a-1;l++)
		my_printf ("%d,",sc[l]);
	my_printf ("%d\n",sc[a-1]);
	return 0;
}