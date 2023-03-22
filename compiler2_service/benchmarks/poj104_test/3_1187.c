#include <header.h>


int main_bench()
{
	int i,k,n,p,l=0;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	int s[2][1000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(s[0][i]));
		s[1][i]=k-s[0][i];
	}
	for(i=0;i<n;i++)
	{
		for(p=0;p<n;p++)
		{
			if((s[1][i]==s[0][p])&&(i!=p))
			{
				l++;
			}
		}
	}
	if(l==0)
	{
		my_printf("no");
	}
	if(l!=0)
	{
		my_printf("yes");
	}
		return 0;
}

