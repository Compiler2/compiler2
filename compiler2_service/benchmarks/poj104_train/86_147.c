#include <header.h>

int main_bench()
{
	int n,m[100],i,j,sum,c[100][20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m[i]);
		for(j=1;j<=m[i];j++)
		{
			my_scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(m[i]==0)
			my_printf("60\n");
		if(m[i]==1)
		{
			if(c[i][1]<=57)
			    my_printf("57\n");
			if(c[i][1]>57)
				my_printf("%d\n",c[i][1]);
		}
		if(m[i]>1)
		{
			if((c[i][m[i]]+3*(m[i]))<=60)
			{
				sum=60-3*m[i];
				my_printf("%d\n",sum);
			}
			else if((c[i][m[i]]+3*(m[i]))<=63)
			{
				my_printf("%d\n",c[i][m[i]]);
			}
			else if((c[i][m[i]]+3*(m[i]))>63)
			{
				if((c[i][m[i]-1]+3*(m[i]-1))<60)
				{
					sum=60-3*(m[i]-1);
				    my_printf("%d\n",sum);
				}
		        else if((c[i][m[i]-1]+3*(m[i]-1))<63)
				{
		    	  	my_printf("%d\n",c[i][m[i]-1]);
				}
				else if((c[i][m[i]-1]+3*(m[i]-1))>63)
				{
					if((c[i][m[i]-2]+3*(m[i]-2))<60)
					{
					    sum=60-3*(m[i]-2);
				        my_printf("%d\n",sum);
					}
		            else if((c[i][m[i]-2]+3*(m[i]-2))<63)
					{
		        	  	my_printf("%d\n",c[i][m[i]-2]);
					}
				}
			}
		}
	}
	return 0;
}