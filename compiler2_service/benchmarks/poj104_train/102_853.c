#include <header.h>

int main_bench()
{
	int t,i,j,k,p,q;
	double h[40],n[40],f[40],s;
	char a[40][10];
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s %lf",a[i],&h[i]);
	}
	j=0;
	k=0;
	for(i=0;i<t;i++)
	{
		if(a[i][0]=='m')
		{
			n[j]=h[i];
			j++;
		}
		if(a[i][0]=='f')
		{
			f[k]=h[i];
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(p=j-1;p>i;p--)
		{
			if(n[p]<n[p-1])
			{
				s=n[p];
				n[p]=n[p-1];
				n[p-1]=s;
			}
		}
	}
	for(i=0;i<j;i++)
		my_printf("%.2lf ",n[i]);
	for(i=0;i<k;i++)
	{
		for(q=k-1;q>i;q--)
		{
			if(f[q]>f[q-1])
			{
				s=f[q];
				f[q]=f[q-1];
				f[q-1]=s;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		my_printf("%.2lf",f[i]);
		if(i!=(k-1))
			my_printf(" ");
	}
	return 0;
}