#define NUM_ITER 654

#include <header.h>

int s[1000][1000];
int main_bench()
{
	int n,i,k,area,a,b,c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			my_scanf("%d",&s[i][k]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(s[i][k]==0)
			{
				a=i;
				b=k;
				break;
			}
		}
		if(k==n)
		{
			if(s[i][k-1]==0)
			{
				break;
			}
		}
		else 
		{break;}
	}
	for(i=n-1;i>=0;i--)
	{
		for(k=n-1;k>=0;k--)
		{
			if(s[i][k]==0)
			{
				c=i;
				d=k;
				break;
			}
		}
		if(k==-1)
		{
			if(s[i][0]==0)
			{break;}
		}
		else{break;}
	}
	area=(d-b-1)*(c-a-1);
	my_printf("%d",area);
	return 0;
}