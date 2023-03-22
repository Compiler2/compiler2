#include <header.h>

int main_bench()
{
	int m,n,i,j,A,B,C,D;
	int a[100][100];
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	A=n-1;
	B=m-1;
	C=0;
	D=1;
	int sum,k=0;
	sum=m*n;
	i=0;
	j=0;
	if(m==1&&n==1)
	{
		my_printf("%d",a[0][0]);
	}
	else
	{
		if(m==1&&n!=1)
		{
			for(i=0;i<n-1;i++)
			{
				my_printf("%d\n",a[0][i]);
			}
			my_printf("%d",a[0][i]);
		}
		else 
		{
			if(n==1&&m!=1)
			{
				for(i=0;i<m-1;i++)
				{
					my_printf("%d\n",a[i][0]);
				}
				my_printf("%d",a[i][0]);
			}
			else
			{
				while(k<sum)
				{
					for(j=C;j<=A;j++)
					{
						if(k!=sum-1)
						{
							my_printf("%d\n",a[i][j]);
							k++;
						}
						else
						{
							my_printf("%d",a[i][j]);
							goto end;
						}
					}
					j--;
					A--;
					for(i=D;i<=B;i++)
					{
						if(k!=sum-1)
						{
							my_printf("%d\n",a[i][j]);
							k++;
						}
						else
						{
							my_printf("%d",a[i][j]);
							goto end;
						}
					}
					i--;
					B--;
					for(j=A;j>=C;j--)
					{
						if(k!=sum-1)
						{
							my_printf("%d\n",a[i][j]);
							k++;
						}
						else
						{
							my_printf("%d",a[i][j]);
							goto end;
						}
					}
					j++;
					C++;
					for(i=B;i>=D;i--)
					{
						if(k!=sum-1)
						{
							my_printf("%d\n",a[i][j]);
							k++;
						}
						else
						{
							my_printf("%d",a[i][j]);
							goto end;
						}
					}
					i++;
					D++;
				}
			}
		}
	}
end:	return 0;
}