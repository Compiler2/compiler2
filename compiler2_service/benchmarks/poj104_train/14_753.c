#include <header.h>

int main_bench()
{  
	int n,i,m;
	int a,b,c;
	int j,k,v;
	int sum[100000];
	int max1=0,max2=0,max3=0;
	int A[100000][1];
	my_scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf ("%d %d %d",&m,&A[i][0],&A[i][1]);
		sum[i]=A[i][0]+A[i][1];
	}
	for (j=1;j<=n;j++)
	{
		if (sum[j]>max1)
		{max1=sum[j];
		a=j;}
	}
	for (k=1;k<=n;k++)
	{
		
			if (sum[k]>max2&&k!=a)
			{max2=sum[k];
			b=k;}
		
	}
	for (v=1;v<=n;v++)
	{
		if (sum[v]<max2)
		{
			if (sum[v]>max3)
			{max3=sum[v];
			c=v;}
		}
	}
	my_printf ("%d %d\n",a,max1);
	my_printf ("%d %d\n",b,max2);
	my_printf ("%d %d",c,max3);

	  return 0;
}

 

