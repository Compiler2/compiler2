#include <header.h>

main_bench()
{
	int m,i,j,k,l;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i++,i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)break;
		}
		if(k<i)continue;
		else
		{
			j=m-i;
			for(l=2;l<j;l++)
			{
				if(j%l==0)break;
			}
			if(l>=j)my_printf("%d %d\n",i,j);
		}
	}
}