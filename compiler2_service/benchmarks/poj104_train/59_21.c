#define NUM_ITER 35

#include <header.h>



int main_bench()
{
	int i,j,n,day,k=1,num=0;
	char a[101][101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
	}
	my_scanf("%d",&day);
again:;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				if(a[i+1][j]=='.')
				{
					a[i+1][j]='%';
				}
				if(a[i-1][j]=='.')
				{
					a[i-1][j]='%';
				}
				if(a[i][j+1]=='.')
				{	
					a[i][j+1]='%';
				}
				if(a[i][j-1]=='.')
					a[i][j-1]='%';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='%')
				a[i][j]='@';
		}
	}
	k++;
	if(k<day)
		goto again;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				num++;
			}
		}
	}
	my_printf("%d",num);
}