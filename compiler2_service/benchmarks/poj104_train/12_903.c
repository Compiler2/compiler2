#include <header.h>

main_bench()
{
	int c[100][100],i=0,j=0,m,n,k,s=0;
	while(my_scanf("%d",&c[i][j]))
	{
		if(c[i][j]!=0&&c[i][j]!=-1)
			j++;
		else if(c[i][j]==0)
		{
			i++;
			j=0;
		}
		else break;
	}
	for(m=0;m<=i-1;m++)
	{
		for(n=0;c[m][n]!=0;n++)
		{
			for(k=0;c[m][k]!=0;k++)
			{
				if(c[m][n]==2*c[m][k])
					s++;
			}
		}
		my_printf("%d\n",s);
		s=0;
	}
}
