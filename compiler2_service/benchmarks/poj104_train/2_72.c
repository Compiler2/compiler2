#define NUM_ITER 899

#include <header.h>

int main_bench()
{
	int i,j,num[1000],m,a[1000][26],k,sum[26],max=0,b;
	char writer[1000][26],letter[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	my_scanf("%d",&m);
	for(k=0;k<26;k++)
	{
		sum[k]=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		my_scanf("%d%s",&num[i],writer[i]);
	}
	for(k=0;k<26;k++)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<26;j++)
			{
				if(writer[i][j]==letter[k])
				{
					a[i][k]++;
				}
			}
		}
	}
	for(k=0;k<26;k++)
	{
		for(i=0;i<m;i++)
		{
	    	sum[k]=sum[k]+a[i][k];
		}
	}
	for(k=0;k<26;k++)
	{
		if(max<sum[k])
		{
			max=sum[k];
			b=k;
		}	
	}
	my_printf("%c\n%d\n",letter[b],max);
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(writer[i][j]==letter[b])
			{
				my_printf("%d\n",num[i]);
			}
		}
	}
	return 0;
}




