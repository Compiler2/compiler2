#include <header.h>

int main_bench()
{
	int c,outnum=0,m=1,n,i,a[300];;
	
	while(m!=0)
		{
			my_scanf("%d %d",&n,&m);
			if(m==0)break;
			else
			{
				for(i=0;i<300;i++)
				{
					a[i]=0;
				}
			outnum=0;c=0;
			while(outnum<n-1)
	{
		for(i=0;i<=n-1;i++)
		{
			if(a[i]==0)
				{c++;
			if(c==m)
			{
				a[i]=1;
				outnum++;
				c=0;
			}}}}
	for(i=0;i<=n;i++)
	{
		if(a[i]==0)
		{
			if(m==1)my_printf("%d\n",i);
			else my_printf("%d\n",i+1);
			break;
		}
	}
	}
	}

	return 0;
}