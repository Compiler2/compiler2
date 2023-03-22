#include <header.h>

int main_bench()
{
	int i,j,n,star1,star2,end1,end2;
	int f=-1;
	int re=0;
	i=0;
	j=0;
	my_scanf("%d",&n);
	int s[1000][1000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&(s[i][j]));
			if(s[i][j]==0&&f==-1)
			{
				star1=i+1;
				star2=j+1;
				f=1;
			}
			if(s[i][j]==0)
			{
				end1=i-1;
				end2=j-1;
			}
		}
	}
	re=(end1-star1+1)*(end2-star2+1);
	my_printf("%d",re);
	return 0;
}
		
